#ifndef FBSTDINT_H
# define FBSTDINT_H

#include "fblimits.h"

#ifndef NO_STDC
#ifdef __cplusplus
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cinttypes>
#else
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>
#endif
#endif

#ifndef __int_t_defined
# define __int_t_defined
typedef signed int int_t;
#endif

#ifndef __uint_t_defined
# define __uint_t_defined
typedef unsigned int uint_t;
#endif

#ifdef CHAR_MAX
# ifndef __schar_t_defined
#  define __schar_t_defined
typedef signed char schar_t;
# endif

# ifndef __uchar_t_defined
#  define __uchar_t_defined
typedef unsigned char uchar_t;
# endif
#endif /* CHAR_MAX*/

#ifdef SHRT_MAX
# ifndef __short_t_defined
#  define __short_t_defined
typedef signed short int short_t;
# endif

# ifndef __ushort_t_defined
#  define __ushort_t_defined
typedef unsigned short int ushort_t;
# endif
#endif /* SHRT_MAX*/

#ifdef LONG_MAX
# ifndef __long_t_defined
#  define __long_t_defined
typedef signed long int long_t;
# endif

# ifndef __ulong_t_defined
#  define __ulong_t_defined
typedef unsigned long int ulong_t;
# endif
#endif /* LONG_MAX*/

#ifdef LLONG_MAX
# ifndef __llong_t_defined
#  define __llong_t_defined
typedef signed long long int llong_t;
# endif

# ifndef __ullong_t_defined
#  define __ullong_t_defined
typedef unsigned long long int ullong_t;
# endif
#endif /* LLONG_MAX*/

#ifndef __size_t_defined
# define __size_t_defined
# undef SIZE_MAX
# undef SIZE_T_C
# undef SIZE_T_WIDTH
# undef SIZEOF_SIZE_T
# undef SIZE_END_BIT
# undef PRI_SIZE_T
# undef SCN_SIZE_T
# ifndef LONG_MAX
typedef uint_t;
#  define SIZE_MAX UINT_MAX
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef ullong_t size_t;
#  define SIZE_MAX ULLONG_MAX
# else
typedef ulong_t size_t;
#  define SIZE_MAX ULONG_MAX
# endif
#endif /* __size_t_defined */

#ifndef SIZEOF_SIZE_T
# define SIZEOF_SIZE_T SIZEOF(SIZE_MAX)
#endif

#ifndef SIZE_T_WIDTH
# define SIZE_T_WIDTH (SIZEOF_SIZE_T * CHAR_BIT)
#endif

#ifndef SIZE_END_BIT
# define SIZE_END_BIT ~(SIZE_MAX>>1)
#endif

#ifndef SIZE_T_C
# ifndef LONG_MAX
#  define SIZE_T_C(VAL) VAL##U
# elif SIZE_MAX > ULONG_MAX
#  define SIZE_T_C(VAL) VAL##LLU
# else
#  define SIZE_T_C(VAL) VAL##LU
# endif
#endif

#ifndef PRI_SIZE_T
# ifndef LONG_MAX
#  define PRI_SIZE_T
# elif SIZE_MAX > ULONG_MAX
#  define PRI_SIZE_T "ll"
# else
#  define PRI_SIZE_T "l"
# endif
#endif

#ifndef SCN_SIZE_T
# ifndef LONG_MAX
#  defined SCN_SIZE_T
# elif SIZE_MAX > ULONG_MAX
#  define SCN_SIZE_T "ll"
# else
#  define SCN_SIZE_T "l"
# endif
#endif

#ifndef __ptrdiff_t_defined
# define __ptrdiff_t_defined
# undef PTRDIFF_MAX
# undef PTRDIFF_MIN
# undef PTRDIFF_T_C
# undef PTRDIFF_T_WIDTH
# undef SIZEOF_PTRDIFF_T
# undef PTRDIFF_END_BIT
# undef PRI_PTRDIFF_T
# undef SCN_PTRDIFF_T
# if !defined( LONG_MAX )
typedef int_t ptrdiff_t;
#  define PTRDIFF_MAX INT_MAX
#  define PTRDIFF_MIN INT_MIN
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef llong_t ptrdiff_t;
#  define PTRDIFF_MAX LLONG_MAX
#  define PTRDIFF_MIN LLONG_MIN
# else
typedef long_t ptrdiff_t;
#  define PTRDIFF_MAX LONG_MAX
#  define PTRDIFF_MIN LONG_MIN
# endif
#endif /* __ptrdiff_t_defined */


#ifndef SIZEOF_PTRDIFF_T
# define SIZEOF_PTRDIFF_T SIZEOF(PTRDIFF_MAX)
#endif

#ifndef PTRDIFF_T_WIDTH
# define PTRDIFF_T_WIDTH (SIZEOF_PTRDIFF_T * CHAR_BIT)
#endif

#ifndef PTRDIFF_END_BIT
# define PTRDIFF_END_BIT ~(PTRDIFF_MAX>>1)
#endif

#ifndef PTRDIFF_T_C
# ifndef LONG_MAX
#  define PTRDIFF_T_C(VAL) VAL
# elif PTRDIFF_MAX > LONG_MAX
#  define PTRDIFF_T_C(VAL) VAL##LL
# else
#  define PTRDIFF_T_C(VAL) VAL##L
# endif
#endif

#ifndef PRI_PTRDIFF_T
# ifndef LONG_MAX
#  define PRI_PTRDIFF_T
# elif PTRDIFF_MAX > LONG_MAX
#  define PRI_PTRDIFF_T "ll"
# else
#  define PRI_PTRDIFF_T "l"
# endif
#endif

#ifndef SCN_PTRDIFF_T
# ifndef LONG_MAX
#  define SCN_PTRDIFF_T
# elif PTRDIFF_MAX > LONG_MAX
#  define SCN_PTRDIFF_T "ll"
# else
#  define SCN_PTRDIFF_T "l"
# endif
#endif

#ifndef __intptr_t_defined
# define __intptr_t_defined
# undef INTPTR_MAX
# undef INTPTR_MIN
# undef INTPTR_T_C
# undef INTPTR_T_WIDTH
# undef SIZEOF_INTPTR_T
# undef INTPTR_END_BIT
# undef PRI_INTPTR_T
# undef SCN_INTPTR_T
# ifndef LONG_MAX
typedef uint_t intptr_t;
#  define INTPTR_MAX INT_MAX
#  define INTPTR_MIN INT_MIN
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef ullong_t intptr_t;
#  define INTPTR_MAX LLONG_MAX
#  define INTPTR_MIN LLONG_MIN
# else
typedef ulong_t intptr_t;
#  define INTPTR_MAX LONG_MAX
#  define INTPTR_MIN LONG_MIN
# endif
#endif /* __intptr_t_defined */


#ifndef SIZEOF_INTPTR_T
# define SIZEOF_INTPTR_T SIZEOF(INTPTR_MAX)
#endif

#ifndef INTPTR_T_WIDTH
# define INTPTR_T_WIDTH (SIZEOF_INTPTR_T * CHAR_BIT)
#endif

#ifndef INTPTR_END_BIT
# define INTPTR_END_BIT ~(INTPTR_MAX>>1)
#endif

#ifndef INTPTR_T_C
# ifndef LONG_MAX
#  define INTPTR_T_C(VAL) VAL
# elif INTPTR_MAX > LONG_MAX
#  define INTPTR_T_C(VAL) VAL##LL
# else
#  define INTPTR_T_C(VAL) VAL##L
# endif
#endif

#ifndef PRI_INTPTR_T
# ifndef LONG_MAX
#  define PRI_INTPTR_T
# elif INTPTR_MAX > LONG_MAX
#  define PRI_INTPTR_T "ll"
# else
#  define PRI_INTPTR_T "l"
# endif
#endif

#ifndef SCN_INTPTR_T
# ifndef LONG_MAX
#  define SCN_INTPTR_T
# elif INTPTR_MAX > LONG_MAX
#  define SCN_INTPTR_T "ll"
# else
#  define SCN_INTPTR_T "l"
# endif
#endif

#ifndef __uintptr_t_defined
# define __uintptr_t_defined
# undef UINTPTR_MAX
# undef UINTPTR_T_C
# undef UINTPTR_T_WIDTH
# undef SIZEOF_UINTPTR_T
# undef UINTPTR_END_BIT
# undef PRI_UINTPTR_T
# undef SCN_UINTPTR_T
# ifndef LONG_MAX
typedef uint_t uintptr_t;
#  define UINTPTR_MAX UINT_MAX
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef ullong_t uintptr_t;
#  define UINTPTR_MAX ULLONG_MAX
# else
typedef ulong_t uintptr_t;
#  define UINTPTR_MAX ULONG_MAX
# endif
#endif /* __uintptr_t_defined */


#ifndef SIZEOF_UINTPTR_T
# define SIZEOF_UINTPTR_T SIZEOF(UINTPTR_MAX)
#endif

#ifndef UINTPTR_T_WIDTH
# define UINTPTR_T_WIDTH (SIZEOF_UINTPTR_T * CHAR_BIT)
#endif

#ifndef UINTPTR_END_BIT
# define UINTPTR_END_BIT ~(UINTPTR_MAX>>1)
#endif

#ifndef UINTPTR_T_C
# ifndef LONG_MAX
#  define UINTPTR_T_C(VAL) VAL
# elif UINTPTR_MAX > ULONG_MAX
#  define UINTPTR_T_C(VAL) VAL##ULL
# else
#  define UINTPTR_T_C(VAL) VAL##UL
# endif
#endif

#ifndef PRI_UINTPTR_T
# ifndef LONG_MAX
#  define PRI_UINTPTR_T
# elif UINTPTR_MAX > ULONG_MAX
#  define PRI_UINTPTR_T "ll"
# else
#  define PRI_UINTPTR_T "l"
# endif
#endif

#ifndef SCN_UINTPTR_T
# ifndef LONG_MAX
#  define SCN_UINTPTR_T
# elif UINTPTR_MAX > ULONG_MAX
#  define SCN_UINTPTR_T "ll"
# else
#  define SCN_UINTPTR_T "l"
# endif
#endif

#ifndef __intmax_t_defined
# define __intmax_t_defined
# undef INTMAX_MAX
# undef INTMAX_MIN
# undef INTMAX_T_C
# undef INTMAX_T_WIDTH
# undef SIZEOF_INTMAX_T
# undef INTMAX_END_BIT
# undef PRI_INTMAX_T
# undef SCN_INTMAX_T
# ifndef LONG_MAX
typedef uint_t intmax_t;
#  define INTMAX_MAX INT_MAX
#  define INTMAX_MIN INT_MIN
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef ullong_t intmax_t;
#  define INTMAX_MAX LLONG_MAX
#  define INTMAX_MIN LLONG_MIN
# else
typedef ulong_t intmax_t;
#  define INTMAX_MAX LONG_MAX
#  define INTMAX_MIN LONG_MIN
# endif
#endif /* __intmax_t_defined */


#ifndef SIZEOF_INTMAX_T
# define SIZEOF_INTMAX_T SIZEOF(INTMAX_MAX)
#endif

#ifndef INTMAX_T_WIDTH
# define INTMAX_T_WIDTH (SIZEOF_INTMAX_T * CHAR_BIT)
#endif

#ifndef INTMAX_END_BIT
# define INTMAX_END_BIT ~(INTMAX_MAX>>1)
#endif

#ifndef INTMAX_T_C
# ifndef LONG_MAX
#  define INTMAX_T_C(VAL) VAL
# elif INTMAX_MAX > LONG_MAX
#  define INTMAX_T_C(VAL) VAL##LL
# else
#  define INTMAX_T_C(VAL) VAL##L
# endif
#endif

#ifndef PRI_INTMAX_T
# ifndef LONG_MAX
#  define PRI_INTMAX_T
# elif INTMAX_MAX > LONG_MAX
#  define PRI_INTMAX_T "ll"
# else
#  define PRI_INTMAX_T "l"
# endif
#endif

#ifndef SCN_INTMAX_T
# ifndef LONG_MAX
#  define SCN_INTMAX_T
# elif INTMAX_MAX > LONG_MAX
#  define SCN_INTMAX_T "ll"
# else
#  define SCN_INTMAX_T "l"
# endif
#endif

#ifndef __uintmax_t_defined
# define __uintmax_t_defined
# undef UINTMAX_MAX
# undef UINTMAX_T_C
# undef UINTMAX_T_WIDTH
# undef SIZEOF_UINTMAX_T
# undef UINTMAX_END_BIT
# undef PRI_UINTMAX_T
# undef SCN_UINTMAX_T
# ifndef LONG_MAX
typedef uint_t uintmax_t;
#  define UINTMAX_MAX UINT_MAX
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef ullong_t uintmax_t;
#  define UINTMAX_MAX ULLONG_MAX
# else
typedef ulong_t uintmax_t;
#  define UINTMAX_MAX ULONG_MAX
# endif
#endif /* __uintmax_t_defined */


#ifndef SIZEOF_UINTMAX_T
# define SIZEOF_UINTMAX_T SIZEOF(UINTMAX_MAX)
#endif

#ifndef UINTMAX_T_WIDTH
# define UINTMAX_T_WIDTH (SIZEOF_UINTMAX_T * CHAR_BIT)
#endif

#ifndef UINTMAX_END_BIT
# define UINTMAX_END_BIT ~(UINTMAX_MAX>>1)
#endif

#ifndef UINTMAX_T_C
# ifndef LONG_MAX
#  define UINTMAX_T_C(VAL) VAL
# elif UINTMAX_MAX > ULONG_MAX
#  define UINTMAX_T_C(VAL) VAL##ULL
# else
#  define UINTMAX_T_C(VAL) VAL##UL
# endif
#endif

#ifndef PRI_UINTMAX_T
# ifndef LONG_MAX
#  define PRI_UINTMAX_T
# elif UINTMAX_MAX > ULONG_MAX
#  define PRI_UINTMAX_T "ll"
# else
#  define PRI_UINTMAX_T "l"
# endif
#endif

#ifndef SCN_UINTMAX_T
# ifndef LONG_MAX
#  define SCN_UINTMAX_T
# elif UINTMAX_MAX > ULONG_MAX
#  define SCN_UINTMAX_T "ll"
# else
#  define SCN_UINTMAX_T "l"
# endif
#endif

#ifndef __int8_t_defined
# undef INT8_MAX
# undef INT8_MIN
# undef INT8_T_C
# undef INT8_T_WIDTH
# undef SIZEOF_INT8_T
# if CHAR_WIDTH == 8
#  define __int8_t_defined
typedef schar_t int8_t;
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH == 8
#  define __int8_t_defined
typedef int_t int8_t;
# endif
# ifdef __int8_t_defined
#  define INT8_MAX 127
#  define INT8_MIN -128
# endif
#endif /* __int8_t_defined */

#ifdef __int8_t_defined

#ifndef SIZEOF_INT8_T
# define SIZEOF_INT8_T SIZEOF(INT8_MAX)
#endif

#ifndef INT8_T_WIDTH
# define INT8_T_WIDTH (SIZEOF_INT8_T * CHAR_BIT)
#endif

#ifndef INT8_END_BIT
# define INT8_END_BIT ~INT8_MAX
#endif

#ifndef INT8_T_C
# define INT8_T_C(VAL) VAL
#endif

#ifndef PRI_INT8_T
# define PRI_INT8_T
#endif

#ifndef SCN_INT8_T
# ifndef CHAR_MAX
#  define SCN_INT8_T
# else
#  define SCN_INT8_T "hh"
# endif
#endif

#endif

#ifndef __uint8_t_defined
# undef UINT8_MAX
# undef UINT8_MIN
# undef UINT8_T_C
# undef UINT8_T_WIDTH
# undef SIZEOF_UINT8_T
# if CHAR_WIDTH == 8
#  define __uint8_t_defined
typedef schar_t uint8_t;
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH == 8
#  define __uint8_t_defined
typedef int_t uint8_t;
# endif
# ifdef __uint8_t_defined
#  define UINT8_MAX 255
# endif
#endif /* __uint8_t_defined */

#ifdef __uint8_t_defined

#ifndef SIZEOF_UINT8_T
# define SIZEOF_UINT8_T SIZEOF(UINT8_MAX)
#endif

#ifndef UINT8_T_WIDTH
# define UINT8_T_WIDTH (SIZEOF_UINT8_T * CHAR_BIT)
#endif

#ifndef UINT8_END_BIT
# define UINT8_END_BIT ~UINT8_MAX
#endif

#ifndef UINT8_T_C
# define UINT8_T_C(VAL) VAL
#endif

#ifndef PRI_UINT8_T
# define PRI_UINT8_T
#endif

#ifndef SCN_UINT8_T
# ifndef CHAR_MAX
#  define SCN_UINT8_T
# else
#  define SCN_UINT8_T "hh"
# endif
#endif

#endif

#ifndef __int_fast8_t_defined
# undef INT_FAST8_MAX
# undef INT_FAST8_MIN
# undef INT_FAST8_T_C
# undef INT_FAST8_T_WIDTH
# undef SIZEOF_INT_FAST8_T
# if CHAR_WIDTH >= 8
#  define __int_fast8_t_defined
typedef schar_t int_fast8_t;
#  define INT_FAST8_MAX SCHAR_MAX
#  define INT_FAST8_MIN SCHAR_MIN
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH >= 8
#  define __int_fast8_t_defined
typedef int_t int_fast8_t;
#  define INT_FAST8_MAX INT_MAX
#  define INT_FAST8_MIN INT_MIN
# endif
#endif /* __int_fast8_t_defined */

#ifdef __int_fast8_t_defined

#ifndef SIZEOF_INT_FAST8_T
# define SIZEOF_INT_FAST8_T SIZEOF(INT_FAST8_MAX)
#endif

#ifndef INT_FAST8_T_WIDTH
# define INT_FAST8_T_WIDTH (SIZEOF_INT_FAST8_T * CHAR_BIT)
#endif

#ifndef INT_FAST8_END_BIT
# define INT_FAST8_END_BIT ~INT_FAST8_MAX
#endif

#ifndef INT_FAST8_T_C
# define INT_FAST8_T_C(VAL) VAL
#endif

#ifndef PRI_INT_FAST8_T
# define PRI_INT_FAST8_T
#endif

#ifndef SCN_INT_FAST8_T
# if CHAR_WIDTH < 8
#  define SCN_INT_FAST8_T
# else
#  define SCN_INT_FAST8_T "hh"
# endif
#endif

#endif

#ifndef __uint_fast8_t_defined
# undef UINT_FAST8_MAX
# undef UINT_FAST8_MIN
# undef UINT_FAST8_T_C
# undef UINT_FAST8_T_WIDTH
# undef SIZEOF_UINT_FAST8_T
# if CHAR_WIDTH >= 8
#  define __uint_fast8_t_defined
typedef schar_t uint_fast8_t;
#  define UINT_FAST8_MAX SCHAR_MAX
#  define UINT_FAST8_MIN SCHAR_MIN
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH >= 8
#  define __uint_fast8_t_defined
typedef int_t uint_fast8_t;
#  define UINT_FAST8_MAX INT_MAX
#  define UINT_FAST8_MIN INT_MIN
# endif
#endif /* __uint_fast8_t_defined */

#ifdef __uint_fast8_t_defined

#ifndef SIZEOF_UINT_FAST8_T
# define SIZEOF_UINT_FAST8_T SIZEOF(UINT_FAST8_MAX)
#endif

#ifndef UINT_FAST8_T_WIDTH
# define UINT_FAST8_T_WIDTH (SIZEOF_UINT_FAST8_T * CHAR_BIT)
#endif

#ifndef UINT_FAST8_END_BIT
# define UINT_FAST8_END_BIT ~UINT_FAST8_MAX
#endif

#ifndef UINT_FAST8_T_C
# define UINT_FAST8_T_C(VAL) VAL
#endif

#ifndef PRI_UINT_FAST8_T
# define PRI_UINT_FAST8_T
#endif

#ifndef SCN_UINT_FAST8_T
# if CHAR_WIDTH < 8
#  define SCN_UINT_FAST8_T
# else
#  define SCN_UINT_FAST8_T "hh"
# endif
#endif

#endif

#ifndef __int_least8_t_defined
# undef INT_LEAST8_MAX
# undef INT_LEAST8_MIN
# undef INT_LEAST8_T_C
# undef INT_LEAST8_T_WIDTH
# undef SIZEOF_INT_LEAST8_T
# if CHAR_WIDTH >= 8
#  define __int_least8_t_defined
typedef schar_t int_least8_t;
#  define INT_LEAST8_MAX SCHAR_MAX
#  define INT_LEAST8_MIN SCHAR_MIN
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH >= 8
#  define __int_least8_t_defined
typedef int_t int_least8_t;
#  define INT_LEAST8_MAX INT_MAX
#  define INT_LEAST8_MIN INT_MIN
# endif
#endif /* __int_least8_t_defined */

#ifdef __int_least8_t_defined

#ifndef SIZEOF_INT_LEAST8_T
# define SIZEOF_INT_LEAST8_T SIZEOF(INT_LEAST8_MAX)
#endif

#ifndef INT_LEAST8_T_WIDTH
# define INT_LEAST8_T_WIDTH (SIZEOF_INT_LEAST8_T * CHAR_BIT)
#endif

#ifndef INT_LEAST8_END_BIT
# define INT_LEAST8_END_BIT ~INT_LEAST8_MAX
#endif

#ifndef INT_LEAST8_T_C
# define INT_LEAST8_T_C(VAL) VAL
#endif

#ifndef PRI_INT_LEAST8_T
# define PRI_INT_LEAST8_T
#endif

#ifndef SCN_INT_LEAST8_T
# if CHAR_WIDTH < 8
#  define SCN_INT_LEAST8_T
# else
#  define SCN_INT_LEAST8_T "hh"
# endif
#endif

#endif

#ifndef __uint_least8_t_defined
# undef UINT_LEAST8_MAX
# undef UINT_LEAST8_MIN
# undef UINT_LEAST8_T_C
# undef UINT_LEAST8_T_WIDTH
# undef SIZEOF_UINT_LEAST8_T
# if CHAR_WIDTH >= 8
#  define __uint_least8_t_defined
typedef schar_t uint_least8_t;
#  define UINT_LEAST8_MAX SCHAR_MAX
#  define UINT_LEAST8_MIN SCHAR_MIN
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH >= 8
#  define __uint_least8_t_defined
typedef int_t uint_least8_t;
#  define UINT_LEAST8_MAX INT_MAX
#  define UINT_LEAST8_MIN INT_MIN
# endif
#endif /* __uint_least8_t_defined */

#ifdef __uint_least8_t_defined

#ifndef SIZEOF_UINT_LEAST8_T
# define SIZEOF_UINT_LEAST8_T SIZEOF(UINT_LEAST8_MAX)
#endif

#ifndef UINT_LEAST8_T_WIDTH
# define UINT_LEAST8_T_WIDTH (SIZEOF_UINT_LEAST8_T * CHAR_BIT)
#endif

#ifndef UINT_LEAST8_END_BIT
# define UINT_LEAST8_END_BIT ~UINT_LEAST8_MAX
#endif

#ifndef UINT_LEAST8_T_C
# define UINT_LEAST8_T_C(VAL) VAL
#endif

#ifndef PRI_UINT_LEAST8_T
# define PRI_UINT_LEAST8_T
#endif

#ifndef SCN_UINT_LEAST8_T
# if CHAR_WIDTH < 8
#  define SCN_UINT_LEAST8_T
# else
#  define SCN_UINT_LEAST8_T "hh"
# endif
#endif

#endif

#endif /* FBSTDINT_H */
