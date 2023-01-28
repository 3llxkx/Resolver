// resolver.cpp
#include "resolver.h"

uintptr_t msvcrtLib = 0;
#define _VCRTFunc(fn) LI_GET(msvcrtLib,fn)

void crt_init(){
    char str3[] = { 'm','s','v','c','r','t','.','d','l','l','\0' };
    msvcrtLib = reinterpret_cast<uintptr_t>(LI_FIND(LoadLibraryA)(str3));
}

void* ___memcpy(void* dst, const void* src, size_t size){   
    return LI_GET(msvcrtLib, memcpy)(dst, src, size);
}

void* ___memmove(void* dest, const void* src, size_t count){
    return LI_GET(msvcrtLib, memmove)(dest, src, count);
}

void* ___memset(void* dest, int c, size_t count){
    return LI_GET(msvcrtLib, memset)(dest, c, count);
}

void ___perror(const char* message) {
    return LI_GET(msvcrtLib, perror)(message);
}

void* ___realloc(void* memblock, size_t size) {
    return LI_GET(msvcrtLib, realloc)(memblock, size);
}

int ___strcmp(const char* string1, const char* string2) {
    return LI_GET(msvcrtLib, strcmp)(string1, string2);
}

size_t ___strlen(const char* str) {
    return LI_GET(msvcrtLib, strlen)(str);
}

time_t ___time(time_t* destTime) {
    return LI_GET(msvcrtLib, time)(destTime);
}

int ___utime(const char* filename, struct _utimbuf* times) {
    return LI_GET(msvcrtLib, _utime)(filename, times);
}

void* ___malloc(size_t size) {
    return LI_GET(msvcrtLib, malloc)(size);
}

void ___free(void* memblock) {
    return LI_GET(msvcrtLib, free)(memblock);
}

void ___exit(int const status) {
    return LI_GET(msvcrtLib, exit)(status);
}

void* ___calloc(size_t number, size_t size) {
    return LI_GET(msvcrtLib, calloc)(number, size);
}

int ___utime64(const char* filename, struct __utimbuf64* times) {
    return LI_GET(msvcrtLib, _utime64)(filename, times);
}

__time64_t ___time64(__time64_t* destTime) {
    return LI_GET(msvcrtLib, _time64)(destTime);
}

int ___stat64(const char* path, struct __stat64* buffer) {
    return LI_GET(msvcrtLib, _stat64)(path, buffer);
}

int* ___errno(void) {
    return LI_GET(msvcrtLib, _errno)();
}

int ___chmod(const char* filename, int pmode) {
    return LI_GET(msvcrtLib, _chmod)(filename, pmode);
}

uintptr_t ____beginthreadex( // NATIVE CODE
    void* security,
    unsigned stack_size,
    unsigned(__stdcall* start_address)(void*),
    void* arglist,
    unsigned initflag,
    unsigned* thrdaddr
) {
    return LI_GET(msvcrtLib, _beginthreadex)(security, stack_size, start_address, arglist, initflag, thrdaddr);
}

int  ___stdio_common_vfprintf(
    _In_                                    unsigned __int64 _Options,
    _Inout_                                 FILE* _Stream,
    _In_z_ _Printf_format_string_params_(2) char const* _Format,
    _In_opt_                                _locale_t        _Locale,
    va_list          _ArgList
) {
    return LI_GET(msvcrtLib, __stdio_common_vfprintf)(_Options, _Stream, _Format, _Locale, _ArgList);
}

FILE* ___acrt_iob_func(unsigned i)
{
    return LI_GET(msvcrtLib, __acrt_iob_func)(i);
}

void __chkstk() {}

void ___chkstk(void)
{
    return LI_GET(msvcrtLib, __chkstk)();
}