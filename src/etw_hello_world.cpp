#include <Windows.h>
#include <Evntprov.h>
#include "helloworldmetric.h"

void do_work(int i)
{
	// actually log an event
	EventWriteSIMPLE_METRIC(L"test event", i);
}

int main(int argc, char** argv)
{
	// register this program with ETW
	EventRegisterHello_World_Metric_Provider();

	for (int i = 0; i < 10; ++i) {
		do_work(i);
	}

	// unregister this program with ETW
	EventUnregisterHello_World_Metric_Provider();

	return 0;
}