// resolver.h
#include <windows.h>
#include <stdio.h>
#include "lazy_importer.hpp"

void ___k32_init();
void ___Sleep(DWORD dwMilliseconds);
void ___WakeConditionVariable(PCONDITION_VARIABLE ConditionVariable);
void ___WakeAllConditionVariable(PCONDITION_VARIABLE ConditionVariable);
DWORD ___WaitForSingleObject(HANDLE hHandle, DWORD  dwMilliseconds);
BOOL ___SleepConditionVariableCS(PCONDITION_VARIABLE ConditionVariable, PCRITICAL_SECTION CriticalSection, DWORD dwMilliseconds);
BOOL ___QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency);
BOOL ___QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount);
void ___LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void ___InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable);
void ___InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void ___GetSystemInfo(LPSYSTEM_INFO lpSystemInfo);
FARPROC ___GetProcAddress(HMODULE hModule, LPCSTR  lpProcName);
HMODULE ___GetModuleHandleW(LPCWSTR lpModuleName);
HMODULE ___GetModuleHandleA(LPCSTR lpModuleName);
DWORD ___GetLastError(VOID);
BOOL ___FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);
HANDLE ___FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
BOOL ___FindClose(HANDLE hFindFile);
void ___EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void ___DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);


