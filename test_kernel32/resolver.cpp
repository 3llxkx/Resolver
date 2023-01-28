// resolver.cpp
#include "resolver.h"


uintptr_t kernelLib = 0;
#define _VCRTFunc(fn) LI_GET(kernelLib,fn)
void ___k32_init()
{
    char str3[] = { 'k','e','r','n','e','l','3','2','.','d','l','l','\0' };
    kernelLib = reinterpret_cast<uintptr_t>(LI_FIND(LoadLibraryA)(str3));
}


void ___Sleep(DWORD dwMilliseconds) {
    return _VCRTFunc(Sleep)(dwMilliseconds);
}

void ___WakeConditionVariable(PCONDITION_VARIABLE ConditionVariable) {
    return _VCRTFunc(WakeConditionVariable)(ConditionVariable);
}

void ___WakeAllConditionVariable(PCONDITION_VARIABLE ConditionVariable) {
    return _VCRTFunc(WakeAllConditionVariable)(ConditionVariable);
}

DWORD ___WaitForSingleObject(HANDLE hHandle, DWORD  dwMilliseconds) {
    return _VCRTFunc(WaitForSingleObject)(hHandle, dwMilliseconds);
}

BOOL ___SleepConditionVariableCS(PCONDITION_VARIABLE ConditionVariable, PCRITICAL_SECTION CriticalSection, DWORD dwMilliseconds) {
    return _VCRTFunc(SleepConditionVariableCS)(ConditionVariable, CriticalSection, dwMilliseconds);
}

BOOL ___QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency) {
    return _VCRTFunc(QueryPerformanceFrequency)(lpFrequency);
}

BOOL ___QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount) {
    return _VCRTFunc(QueryPerformanceCounter)(lpPerformanceCount);
}

void ___LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    return _VCRTFunc(LeaveCriticalSection)(lpCriticalSection);
}


void ___InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable) {
    return _VCRTFunc(InitializeConditionVariable)(ConditionVariable);
}

void ___InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    return _VCRTFunc(InitializeCriticalSection)(lpCriticalSection);
}

void ___GetSystemInfo(LPSYSTEM_INFO lpSystemInfo) {
    return _VCRTFunc(GetSystemInfo)(lpSystemInfo);
}

FARPROC ___GetProcAddress(HMODULE hModule, LPCSTR  lpProcName) {
    return _VCRTFunc(GetProcAddress)(hModule, lpProcName);
}

HMODULE ___GetModuleHandleW(LPCWSTR lpModuleName) {
    return _VCRTFunc(GetModuleHandleW)(lpModuleName);
}

HMODULE ___GetModuleHandleA(LPCSTR lpModuleName) {
    return _VCRTFunc(GetModuleHandleA)(lpModuleName);
}

DWORD ___GetLastError(VOID) {
    return _VCRTFunc(GetLastError)();
}

BOOL ___FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData) {
    return _VCRTFunc(FindNextFileA)(hFindFile, lpFindFileData);
}

HANDLE ___FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData) {
    return _VCRTFunc(FindFirstFileA)(lpFileName, lpFindFileData);
}

BOOL ___FindClose(HANDLE hFindFile) {
    return _VCRTFunc(FindClose)(hFindFile);
}

void ___EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    return _VCRTFunc(EnterCriticalSection)(lpCriticalSection);
}

void ___DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    return _VCRTFunc(DeleteCriticalSection)(lpCriticalSection);
}
