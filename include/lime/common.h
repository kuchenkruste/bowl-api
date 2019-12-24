#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <ctype.h>
#include <math.h>

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef int64_t s64;
typedef int32_t s32;
typedef int16_t s16;
typedef int8_t  s8;

#if defined(unix) || defined(__unix__) || defined(__unix)
#define OS_UNIX
#elif defined(_WIN32) || defined(_WIN64)
#define OS_WINDOWS
#endif

#if defined(OS_UNIX)
#include <dlfcn.h>
#elif defined(OS_WINDOWS)
#include <windows.h>
#endif

/**
 * A helper for the 'CONCAT' macro. 
 * @internal
 */
#define _CONCAT(x, y) x ## y

/**
 * Concatenates the two provided arguments.
 * @param x The first argument.
 * @param y The second argument.
 * @return The concatenation of 'x' and 'y'.
 */
#define CONCAT(x, y) _CONCAT(x, y)

#endif
