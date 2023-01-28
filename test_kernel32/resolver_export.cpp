#include"resolver.h"

#define RESOLVER extern "C" 

RESOLVER void __cdecl k32_init(void)
{
	return ___k32_init();
}

RESOLVER void __stdcall Sleep(DWORD dwMilliseconds)
{
	return ___Sleep(dwMilliseconds);
}

RESOLVER void __stdcall WakeConditionVariable(PCONDITION_VARIABLE ConditionVariable)
{
	return ___WakeConditionVariable(ConditionVariable);
}

RESOLVER void __stdcall WakeAllConditionVariable(PCONDITION_VARIABLE ConditionVariable)
{
	return ___WakeAllConditionVariable(ConditionVariable);
}

RESOLVER DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD  dwMilliseconds)
{
	return ___WaitForSingleObject(hHandle, dwMilliseconds);
}

RESOLVER BOOL __stdcall SleepConditionVariableCS(PCONDITION_VARIABLE ConditionVariable, PCRITICAL_SECTION CriticalSection, DWORD dwMilliseconds)
{
	return ___SleepConditionVariableCS(ConditionVariable, CriticalSection, dwMilliseconds);
}

RESOLVER BOOL __stdcall QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency)
{
	return ___QueryPerformanceFrequency(lpFrequency);
}

RESOLVER BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount)
{
	return ___QueryPerformanceCounter(lpPerformanceCount);
}

RESOLVER void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
	return ___LeaveCriticalSection(lpCriticalSection);
}

RESOLVER void __stdcall K32_InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable)
{
	return ___InitializeConditionVariable(ConditionVariable);
}

RESOLVER void __stdcall InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable)
{
	return ___InitializeConditionVariable(ConditionVariable);
}

RESOLVER void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
	return ___InitializeCriticalSection(lpCriticalSection);
}

RESOLVER void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
{
	return ___GetSystemInfo(lpSystemInfo);
}

RESOLVER FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR  lpProcName)
{
	return ___GetProcAddress(hModule, lpProcName);
}


RESOLVER HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)
{
	return ___GetModuleHandleW(lpModuleName);
}

RESOLVER HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
	return ___GetModuleHandleA(lpModuleName);
}

RESOLVER DWORD __stdcall GetLastError(VOID)
{
	return ___GetLastError();
}

RESOLVER BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
{
	return ___FindNextFileA(hFindFile, lpFindFileData);
}

RESOLVER HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
	return ___FindFirstFileA(lpFileName, lpFindFileData);
}

RESOLVER BOOL __stdcall FindClose(HANDLE hFindFile)
{
	return ___FindClose(hFindFile);
}

RESOLVER void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
	return ___EnterCriticalSection(lpCriticalSection);
}

RESOLVER void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
	return ___DeleteCriticalSection(lpCriticalSection);
}