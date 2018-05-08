#ifndef DEFINE_CROSS_COMPILE_H
#define DEFINE_CROSS_COMPILE_H

#if defined(__MINGW64__)
#include "string.h"
#include "_mingw.h" //taheri : for support __int64 and any integer s
//____________________________________________
//src : https : //stackoverflow.com/questions/11761703/overloading-macro-on-number-of-arguments
// get number of arguments with __NARG__
#define __NARG__(...) __NARG_I_(__VA_ARGS__, __RSEQ_N())
#define __NARG_I_(...) __ARG_N(__VA_ARGS__)
#define __ARG_N(                                      \
    _1, _2, _3, _4, _5, _6, _7, _8, _9, _10,          \
    _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
    _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
    _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
    _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
    _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
    _61, _62, _63, N, ...) N
#define __RSEQ_N()                            \
      63, 62, 61, 60,                         \
      59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
      49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
      39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
      29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
      19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
      9, 8, 7, 6, 5, 4, 3, 2, 1, 0

// general definition for any function name
#define _VFUNC_(name, n) name##n
#define _VFUNC(name, n) _VFUNC_(name, n)
#define VFUNC(func, ...) _VFUNC(func, __NARG__(__VA_ARGS__)) \
\
(__VA_ARGS__)

//____________________________________________

typedef int BOOL;
typedef const char *LPCSTR;
typedef char *LPSTR;
typedef const char *LPCSTR;
typedef char *LPWSTR;
typedef const wchar_t *LPCWSTR;
typedef char *LPTSTR;
typedef const char *LPCTSTR;
typedef unsigned long DWORD;
typedef char WCHAR;

#define FALSE 0
#define TRUE 1

#define lstrcpynW(dest, src, n) strncpy(dest, src, n)

#define lstrcpyW(...) VFUNC(lstrcpyW, __VA_ARGS__)
#define lstrcpyW1(dest,src,n)  wcsncpy(dest,src,n)
#define lstrcpyW2(dest,src)  wcscpy(dest,src)

//#define wcscpy_s()
#define lstrcpynA(dest, src, n) strncpy(dest, src, n)
#define lstrcpyA(dest, src) strcpy(dest, src)
#define lstrlenW(s) strlen(s)
#define lstrlenA(s) strlen(s)

typedef long long INT64;
//typedef __int64 int64_t;

typedef void *HANDLE;

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _LARGE_INTEGER
{
  struct
  {
    DWORD LowPart;
    long HighPart;
  };
  struct
  {
    DWORD LowPart;
    long HighPart;
  } u;
  __int64 QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

#ifdef __cplusplus
}
#endif

#endif
#endif
