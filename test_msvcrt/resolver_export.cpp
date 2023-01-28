#include"resolver.h"

#define RESOLVER extern "C" 
#pragma function(memcpy)
#pragma function(memmove)
#pragma function(memset)
#pragma function(strlen)
#pragma function(strcmp)



RESOLVER void* __cdecl memcpy(void* dst, const void* src, size_t size)
{
	return ___memcpy(dst, src, size);
}

RESOLVER void* __cdecl memmove(void* dst, const void* src, size_t size)
{
	return ___memmove(dst, src, size);
}

RESOLVER void* __cdecl memset(void* dest, int c, size_t count)
{
	return ___memset(dest, c, count);
}

/*
RESOLVER int __cdecl strcmp(const char* string1, const char* string2)
{
	return ___strcmp(string1, string2);
}

RESOLVER size_t __cdecl strlen(const char* str)
{
	return ___strlen(str);
}

RESOLVER time_t __cdecl _time(time_t* destTime)
{
	return ___time(destTime);
}

RESOLVER int __cdecl __utime(const char* filename, struct _utimbuf* times)
{
	return ___utime(filename, times);
}
*/

RESOLVER void __cdecl __chkstk(void)
{
	return ___chkstk();
}

RESOLVER void* __cdecl malloc(size_t size)
{
	return ___malloc(size);
}

RESOLVER void __cdecl free(void* memblock)
{
	return ___free(memblock);
}

RESOLVER uintptr_t __cdecl _beginthreadex( // NATIVE CODE
	void* security,
	unsigned stack_size,
	unsigned(__stdcall* start_address)(void*),
	void* arglist,
	unsigned initflag,
	unsigned* thrdaddr
)
{
	return ____beginthreadex(security, stack_size, start_address, arglist, initflag, thrdaddr);
}

RESOLVER int* __cdecl _errno(void)
{
	return ___errno();
}

RESOLVER void __cdecl exit(int const status)
{
	return ___exit(status);
}

RESOLVER void* __cdecl calloc(size_t number, size_t size)
{
	return ___calloc(number, size);
}

RESOLVER FILE* __cdecl __acrt_iob_func(unsigned i)
{
	return ___acrt_iob_func(i);
}

RESOLVER void __cdecl perror(const char* message)
{
	return ___perror(message);
}

RESOLVER void* __cdecl realloc(void* memblock, size_t size)
{
	return ___realloc(memblock, size);
}

RESOLVER int __cdecl __stdio_common_vfprintf(
	_In_                                    unsigned __int64 _Options,
	_Inout_                                 FILE* _Stream,
	_In_z_ _Printf_format_string_params_(2) char const* _Format,
	_In_opt_                                _locale_t        _Locale,
	va_list          _ArgList
)
{
	return ___stdio_common_vfprintf(_Options, _Stream, _Format, _Locale, _ArgList);
}

RESOLVER int __cdecl _utime64(const char* filename, struct __utimbuf64* times)
{
	return ___utime64(filename, times);
}

RESOLVER __time64_t __cdecl _time64(__time64_t* destTime)
{
	return ___time64(destTime);
}

RESOLVER int __cdecl _stat64(const char* path, struct __stat64* buffer)
{
	return ___stat64(path, buffer);
}


RESOLVER int __cdecl _chmod(const char* filename, int pmode)
{
	return ___chmod(filename, pmode);
}