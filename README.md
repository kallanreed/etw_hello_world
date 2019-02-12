# ETW Hello World
Sample code for my related [blog post](https://kallanreed.wordpress.com/2016/05/28/creating-an-etw-provider-step-by-step/)

## Requirements

* [VS2017 or higher](https://visualstudio.microsoft.com/downloads/)
* [Microsoft Message Analyzer](https://www.microsoft.com/en-us/download/details.aspx?id=44226)

## Quick Start

1. Open the Solution and build the project. This will create an executable called `etw_hello_world.exe`.
2. Edit helloworldmetric.man in a text editor and update `resourceFileName` and `messageFileName` with the full path to the built `etw_hello_world.exe` then save the file.
3. Open an **Administrator** command prompt and `cd` into the project `src` directory.
4. Run `wevtutil im helloworldmetric.man` to install the manifest. The exe file must be built and the path to it must be correct for this to work.
5. Now you can open Microsoft Message Analyzer or whatever tool and you should be able to add the `Hello World Metric Provider` system provider.
6. Run `etw_hello_world.exe` to log the messages.

## Cleanup

You must have the manifest file you used to register in order to unregister the provider.

1. Open an **Administrator** command prompt and `cd` into the project `src` directory.
2. Run `wevtutil um helloworldmetric.man` to uninstall the manifest.
