// resolver.h
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/utime.h>
#include <time.h>
#include <errno.h>
#include <io.h>
#include <process.h>
#include <cstddef>
#include "lazy_importer.hpp"


extern "C" void crt_init();

void* ___memcpy(void* dst, const void* src, size_t size);
void* ___memmove(void* dest, const void* src, size_t count);
void* ___memset(void* dest, int c, size_t count);
void ___perror(const char* message);
void* ___realloc(void* memblock, size_t size);
int ___strcmp(const char* string1, const char* string2);
size_t ___strlen(const char* str);
time_t ___time(time_t* destTime);
int ___utime(const char* filename, struct _utimbuf* times);
void* ___malloc(size_t size);
void ___free(void* memblock);
void ___exit(
    int const status
);
void* ___calloc(
    size_t number,
    size_t size
);
int ___utime64(
    const char* filename,
    struct __utimbuf64* times
);
__time64_t ___time64(__time64_t* destTime);
int ___stat64(
    const char* path,
    struct __stat64* buffer
);
int* ___errno(void);
int ___chmod(const char* filename, int pmode);
uintptr_t ____beginthreadex( // NATIVE CODE
    void* security,
    unsigned stack_size,
    unsigned(__stdcall* start_address)(void*),
    void* arglist,
    unsigned initflag,
    unsigned* thrdaddr
);
int  ___stdio_common_vfprintf(
    _In_                                    unsigned __int64 _Options,
    _Inout_                                 FILE* _Stream,
    _In_z_ _Printf_format_string_params_(2) char const* _Format,
    _In_opt_                                _locale_t        _Locale,
    va_list          _ArgList
);
FILE* ___acrt_iob_func(unsigned i);

void ___chkstk(void);