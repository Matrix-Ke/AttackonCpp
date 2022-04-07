#if !defined(_MT)
#error _beginthreadex requires a multithreaded C run-time library.
#endif

#define STRICT 1
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <process.h>
#include <iostream>
using namespace std;

#pragma warning(disable:4996)

#define Second (1000)

unsigned __stdcall Thread(void* ArgList) {
	HANDLE hEvent = *((HANDLE*)ArgList);
	while (WaitForSingleObject(hEvent, 0) != WAIT_OBJECT_0) {
		Sleep(Second >> 2); // sleep for a quarter of a second
		cout << "Waiting for signal\n";
	}
	cout << "Thread ending\n";
	return 0;
}

int main(int argc, char* argv[], char* envp[]) {
	int ErrorNumber, DOSErrorNumber;
	unsigned ThreadId;
	HANDLE hThread, hEvent;

	// Create a manual-reset nonsignaled unnamed event
	hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);

	hThread = (HANDLE)_beginthreadex(NULL, 0, Thread, &hEvent, 0, &ThreadId);
	//_beginthreadex()
	if (hThread == 0) {
		ErrorNumber = errno;
		DOSErrorNumber = _doserrno;
		cerr << "Begin thread error: " << strerror(ErrorNumber) << '\n';
		cerr << "Begin thread DOS error code: " << DOSErrorNumber << '\n';
		return 16;
	}
	cout << "Thread begun\n";

	Sleep(Second << 1); // wait 2 seconds
	SetEvent(hEvent); // signal thread to end
	int rv = WaitForSingleObject(hThread, Second << 3); // wait up to 8 seconds
	cout << "Thread wait rv " << rv << '\n';
	CloseHandle(hEvent);
	CloseHandle(hThread);
	cout << "hThread === " << hThread << endl;
	return 0;
}