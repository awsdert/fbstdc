#ifndef FBSTDINT_H
# define FBSTDINT_H

#include "limits.h"

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

/* Common typedefs that SHOULD be in standard C but aren't */

#ifndef __bool_defined
# define __bool_defined
# ifndef __cplusplus
typedef _Bool bool;
#  define false 0
#  define true !false
# endif
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
typedef short signed int short_t;
# endif

# ifndef __ushort_t_defined
#  define __ushort_t_defined
typedef short unsigned int ushort_t;
# endif
#endif /* SHRT_MAX*/

#ifdef LONG_MAX
# ifndef __long_t_defined
#  define __long_t_defined
typedef long signed int long_t;
# endif

# ifndef __ulong_t_defined
#  define __ulong_t_defined
typedef long unsigned int ulong_t;
# endif
#endif /* LONG_MAX*/

#ifdef LLONG_MAX
# ifndef __llong_t_defined
#  define __llong_t_defined
typedef long long signed int llong_t;
# endif

# ifndef __ullong_t_defined
#  define __ullong_t_defined
typedef long long unsigned int ullong_t;
# endif
#endif /* LLONG_MAX*/

#ifdef SSIZE_MAX
# define UNIC_SSIZE_MAX SSIZE_MAX
#elif defined(UNIC_LLONG_MAX) && UNIC_LLONG_MAX > UNIC_LONG_MAX
# define UNIC_SSIZE_MAX UNIC_LLONG_MAX
#else
# define UNIC_SSIZE_MAX UNIC_LONG_MAX
#endif

#ifndef SSIZE_MAX
# ifdef UNIC_FALLBACK
#  define SSIZE_MAX UNIC_SSIZE_MAX
# endif
#endif

#ifdef SSIZE_MIN
# define UNIC_SSIZE_MIN SSIZE_MIN
#else
# define UNIC_SSIZE_MIN UNIC___MIN(UNIC_SSIZE_MAX)
# ifdef UNIC_FALLBACK
#  define SSIZE_MIN UNIC_SSIZE_MIN
# endif
#endif

#ifdef SIZE_MAX
# define UNIC_SIZE_MAX SIZE_MAX
#else
# define UNIC_SIZE_MAX UNIC___MAX(UNIC_SSIZE_MAX)
# ifdef UNIC_FALLBACK
#  define SIZE_MAX UNIC_SIZE_MAX
# endif
#endif

#ifdef SIZE_END_BIT
# define UNIC_SIZE_END_BIT SIZE_END_BIT
#else
# define UNIC_SIZE_END_BIT (~(SIZE_MAX>>1))
# ifdef UNIC_FALLBACK
#  define SIZE_END_BIT UNIC_SIZE_END_BIT
# endif
#endif

#ifdef SIZEOF_SIZE_T
# define UNIC_SIZEOF_SIZE_T SIZEOF_SIZE_T
#else
# define UNIC_SIZEOF_SIZE_T SIZEOF_BY_UMAX(SIZE_MAX)
# ifdef UNIC_FALLBACK
#  define SIZEOF_SIZE_T UNIC_SIZEOF_SIZE_T
# endif
#endif

#ifdef SIZE_T_WIDTH
# define UNIC_SIZE_T_WIDTH SIZE_T_WIDTH
#else
# define UNIC_SIZE_T_WIDTH (UNIC_SIZEOF_SIZE_T * UNIC_CHAR_BIT)
# ifdef UNIC_FALLBACK
#  define SIZE_T_WIDTH UNIC_SIZE_T_WIDTH
# endif
#endif

#ifdef __ssize_t_defined
typedef ssize_t unic_ssize_t;
#elif UNIC_SSIZE_MAX == UNIC_INT_MAX
typedef int_t unic_ssize_t;
#elif UNIC_SSIZE_MAX > UNIC_LONG_MAX
typedef llong_t unic_ssize_t;
#else
typedef long_t unic_ssize_t;
#endif

#if UNIC_SSIZE_MAX == UNIC_INT_MAX
# define UNIC_SSIZE_C(VAL) VAL
# define UNIC_PRI_SSIZE
# define UNIC_SCN_SSIZE
#elif UNIC_SSIZE_MAX > UNIC_LONG_MAX
# define UNIC_SSIZE_C(VAL) VAL#LL
# define UNIC_PRI_SSIZE "ll"
# define UNIC_SCN_SSIZE "ll"
#else
# define UNIC_SSIZE_C(VAL) VAL##L
# define UNIC_PRI_SSIZE "l"
# define UNIC_SCN_SSIZE "l"
#endif

#ifndef __ssize_t_defined
# ifdef UNIC_FALLBACK
#  define __ssize_t_defined
typedef unic_ssize_t ssize_t;
# endif
#endif

#define UNIC_PRIiSSIZE UNIC_PRI_SSIZE "i"
#define UNIC_PRIoSSIZE UNIC_PRI_SSIZE "o"
#define UNIC_PRIuSSIZE UNIC_PRI_SSIZE "u"
#define UNIC_PRIxSSIZE UNIC_PRI_SSIZE "x"
#define UNIC_PRIXSSIZE UNIC_PRI_SSIZE "X"

#ifndef PRIxSSIZE
# ifdef UNIC_FALLBACK
#  define PRIiSSIZE UNIC_PRIiSSIZE
#  define PRIoSSIZE UNIC_PRIoSSIZE
#  define PRIuSSIZE UNIC_PRIuSSIZE
#  define PRIxSSIZE UNIC_PRIxSSIZE
#  define PRIXSSIZE UNIC_PRIXSSIZE
# endif
#endif

#define UNIC_SCNiSSIZE UNIC_SCN_SSIZE "i"
#define UNIC_SCNoSSIZE UNIC_SCN_SSIZE "o"
#define UNIC_SCNuSSIZE UNIC_SCN_SSIZE "u"
#define UNIC_SCNxSSIZE UNIC_SCN_SSIZE "x"
#define UNIC_SCNXSSIZE UNIC_SCN_SSIZE "X"

#ifndef SCNxSSIZE
# ifdef UNIC_FALLBACK
#  define SCNiSSIZE UNIC_SCNiSSIZE
#  define SCNoSSIZE UNIC_SCNoSSIZE
#  define SCNuSSIZE UNIC_SCNuSSIZE
#  define SCNxSSIZE UNIC_SCNxSSIZE
#  define SCNXSSIZE UNIC_SCNXSSIZE
# endif
#endif

#ifdef __size_t_defined
typedef size_t unic_size_t;
#elif UNIC_SIZE_MAX == UNIC_UINT_MAX
typedef uint_t unic_size_t;
#elif UNIC_SIZE_MAX > UNIC_ULONG_MAX
typedef ullong_t unic_size_t;
#else
typedef ulong_t unic_size_t;
#endif

#if UNIC_SIZE_MAX == UNIC_UINT_MAX
# define UNIC_SIZE_C(VAL) VAL##U
# define UNIC_PRI_SIZE
# define UNIC_SCN_SIZE
#elif UNIC_SIZE_MAX > UNIC_ULONG_MAX
# define UNIC_SIZE_C(VAL) VAL##ULL
# define UNIC_PRI_SIZE "ll"
# define UNIC_SCN_SIZE "ll"
#else
# define UNIC_SIZE_C(VAL) VAL##UL
# define UNIC_PRI_SIZE "l"
# define UNIC_SCN_SIZE "l"
#endif

#ifndef __size_t_defined
# ifdef UNIC_FALLBACK
#  define __size_t_defined
typedef unic_size_t size_t;
# endif
#endif

#define UNIC_PRIiSIZE UNIC_PRI_SIZE "i"
#define UNIC_PRIoSIZE UNIC_PRI_SIZE "o"
#define UNIC_PRIuSIZE UNIC_PRI_SIZE "u"
#define UNIC_PRIxSIZE UNIC_PRI_SIZE "x"
#define UNIC_PRIXSIZE UNIC_PRI_SIZE "X"

#ifndef PRIxSIZE
# ifdef UNIC_FALLBACK
#  define PRIiSIZE UNIC_PRIiSIZE
#  define PRIoSIZE UNIC_PRIoSIZE
#  define PRIuSIZE UNIC_PRIuSIZE
#  define PRIxSIZE UNIC_PRIxSIZE
#  define PRIXSIZE UNIC_PRIXSIZE
# endif
#endif

#define UNIC_SCNiSIZE UNIC_SCN_SIZE "i"
#define UNIC_SCNoSIZE UNIC_SCN_SIZE "o"
#define UNIC_SCNuSIZE UNIC_SCN_SIZE "u"
#define UNIC_SCNxSIZE UNIC_SCN_SIZE "x"
#define UNIC_SCNXSIZE UNIC_SCN_SIZE "X"

#ifndef SCNxSIZE
# ifdef UNIC_FALLBACK
#  define SCNiSIZE UNIC_SCNiSIZE
#  define SCNoSIZE UNIC_SCNoSIZE
#  define SCNuSIZE UNIC_SCNuSIZE
#  define SCNxSIZE UNIC_SCNxSIZE
#  define SCNXSIZE UNIC_SCNXSIZE
# endif
#endif

#ifdef PTRDIFF_MAX
# define UNIC_PTRDIFF_MAX PTRDIFF_MAX
#elif defined(UNIC_LLONG_MAX) && UNIC_LLONG_MAX > UNIC_LONG_MAX
# define UNIC_PTRDIFF_MAX UNIC_LLONG_MAX
#else
# define UNIC_PTRDIFF_MAX UNIC_LONG_MAX
#endif

#ifndef PTRDIFF_MAX
# ifdef UNIC_FALLBACK
#  define PTRDIFF_MAX UNIC_PTRDIFF_MAX
# endif
#endif

#ifdef PTRDIFF_MIN
# define UNIC_PTRDIFF_MIN PTRDIFF_MIN
#else
# define UNIC_PTRDIFF_MIN UNIC___MIN(UNIC_PTRDIFF_MAX)
# ifdef UNIC_FALLBACK
#  define PTRDIFF_MIN UNIC_PTRDIFF_MIN
# endif
#endif

#ifdef SIZEOF_PTRDIFF_T
# define UNIC_SIZEOF_PTRDIFF_T SIZEOF_PTRDIFF_T
#else
# define UNIC_SIZEOF_PTRDIFF_T SIZEOF_BY_IMAX(PTRDIFF_MAX)
# ifdef UNIC_FALLBACK
#  define SIZEOF_PTRDIFF_T UNIC_SIZEOF_PTRDIFF_T
# endif
#endif

#ifdef PTRDIFF_T_WIDTH
# define UNIC_PTRDIFF_T_WIDTH PTRDIFF_T_WIDTH
#else
# define UNIC_PTRDIFF_T_WIDTH (UNIC_SIZEOF_PTRDIFF_T * UNIC_CHAR_BIT)
# ifdef UNIC_FALLBACK
#  define PTRDIFF_T_WIDTH UNIC_PTRDIFF_T_WIDTH
# endif
#endif

#ifdef PTRDIFF_END_BIT
# define UNIC_PTRDIFF_END_BIT
#else
# define UNIC_PTRDIFF_END_BIT (~PTRDIFF_MAX)
# ifdef UNIC_FALLBACK
#  define PTRDIFF_END_BIT UNIC_PTRDIFF_END_BIT
# endif
#endif

#ifdef __ptrdiff_t_defined
typedef ptrdiff_t unic_ptrdiff_t;
#elif UNIC_PTRDIFF_MAX == UNIC_INT_MAX
typedef int_t ptrdiff_t;
#elif UNIC_PTRDIFF_MAX > LONG_MAX
typedef llong_t ptrdiff_t;
#else
typedef long_t ptrdiff_t;
#endif

#ifndef __ptrdiff_t_defined
# ifdef UNIC_FALLBACK
#  define __ptrdiff_t_defined
typedef unic_ptrdiff_t ptrdiff_t;
# endif
#endif

#if UNIC_PTRDIFF_MAX == UNIC_INT_MAX
# define UNIC_PTRDIFF_C(VAL) VAL
# define UNIC_PRI_PTRDIFF
# define UNIC_SCN_PTRDIFF
#elif UNIC_PTRDIFF_MAX > LONG_MAX
# define UNIC_PTRDIFF_C(VAL) VAL##LL
# define UNIC_PRI_PTRDIFF "ll"
# define UNIC_SCN_PTRDIFF "ll"
#else
# define UNIC_PTRDIFF_C(VAL) VAL##L
# define UNIC_PRI_PTRDIFF "l"
# define UNIC_SCN_PTRDIFF "l"
#endif

#define UNIC_PRIiPTRDIFF UNIC_PRI_PTRDIFF "i"
#define UNIC_PRIoPTRDIFF UNIC_PRI_PTRDIFF "o"
#define UNIC_PRIuPTRDIFF UNIC_PRI_PTRDIFF "u"
#define UNIC_PRIxPTRDIFF UNIC_PRI_PTRDIFF "x"
#define UNIC_PRIXPTRDIFF UNIC_PRI_PTRDIFF "X"

#ifndef PRIxPTRDIFF
# ifdef UNIC_FALLBACK
#  define PRIiPTRDIFF UNIC_PRIiPTRDIFF
#  define PRIoPTRDIFF UNIC_PRIoPTRDIFF
#  define PRIuPTRDIFF UNIC_PRIuPTRDIFF
#  define PRIxPTRDIFF UNIC_PRIxPTRDIFF
#  define PRIXPTRDIFF UNIC_PRIXPTRDIFF
# endif
#endif

#define UNIC_SCNiPTRDIFF UNIC_SCN_PTRDIFF "i"
#define UNIC_SCNoPTRDIFF UNIC_SCN_PTRDIFF "o"
#define UNIC_SCNuPTRDIFF UNIC_SCN_PTRDIFF "u"
#define UNIC_SCNxPTRDIFF UNIC_SCN_PTRDIFF "x"
#define UNIC_SCNXPTRDIFF UNIC_SCN_PTRDIFF "X"

#ifndef SCNxPTRDIFF
# ifdef UNIC_FALLBACK
#  define SCNiPTRDIFF UNIC_SCNiPTRDIFF
#  define SCNoPTRDIFF UNIC_SCNoPTRDIFF
#  define SCNuPTRDIFF UNIC_SCNuPTRDIFF
#  define SCNxPTRDIFF UNIC_SCNxPTRDIFF
#  define SCNXPTRDIFF UNIC_SCNXPTRDIFF
# endif
#endif

#ifdef INTPTR_MAX
# define UNIC_INTPTR_MAX INTPTR_MAX
#elif defined(UNIC_LLONG_MAX) && UNIC_LLONG_MAX > UNIC_LONG_MAX
# define UNIC_INTPTR_MAX UNIC_LLONG_MAX
#else
# define UNIC_INTPTR_MAX UNIC_LONG_MAX
#endif

#ifndef INTPTR_MAX
# ifdef UNIC_FALLBACK
#  define INTPTR_MAX UNIC_INTPTR_MAX
# endif
#endif

#ifdef INTPTR_MIN
# define UNIC_INTPTR_MIN INTPTR_MIN
#else
# define UNIC_INTPTR_MIN UNIC___MIN(UNIC_INTPTR_MAX)
# ifdef UNIC_FALLBACK
#  define INTPTR_MIN UNIC_INTPTR_MIN
# endif
#endif

#ifdef SIZEOF_INTPTR_T
# define UNIC_SIZEOF_INTPTR_T SIZEOF_INTPTR_T
#else
# define UNIC_SIZEOF_INTPTR_T SIZEOF_BY_IMAX(INTPTR_MAX)
# ifdef UNIC_FALLBACK
#  define SIZEOF_INTPTR_T UNIC_SIZEOF_INTPTR_T
# endif
#endif

#ifdef INTPTR_T_WIDTH
# define UNIC_INTPTR_T_WIDTH INTPTR_T_WIDTH
#else
# define UNIC_INTPTR_T_WIDTH (UNIC_SIZEOF_INTPTR_T * UNIC_CHAR_BIT)
# ifdef UNIC_FALLBACK
#  define INTPTR_T_WIDTH UNIC_INTPTR_T_WIDTH
# endif
#endif

#ifdef INTPTR_END_BIT
# define UNIC_INTPTR_END_BIT
#else
# define UNIC_INTPTR_END_BIT (~INTPTR_MAX)
# ifdef UNIC_FALLBACK
#  define INTPTR_END_BIT UNIC_INTPTR_END_BIT
# endif
#endif

#ifdef __intptr_t_defined
typedef intptr_t unic_intptr_t;
#elif UNIC_INTPTR_MAX == UNIC_INT_MAX
typedef int_t intptr_t;
#elif UNIC_INTPTR_MAX > LONG_MAX
typedef llong_t intptr_t;
#else
typedef long_t intptr_t;
#endif

#ifndef __intptr_t_defined
# ifdef UNIC_FALLBACK
#  define __intptr_t_defined
typedef unic_intptr_t intptr_t;
# endif
#endif

#if UNIC_INTPTR_MAX == UNIC_INT_MAX
# define UNIC_INTPTR_C(VAL) VAL
# define UNIC_PRI_INTPTR
# define UNIC_SCN_INTPTR
#elif UNIC_INTPTR_MAX > LONG_MAX
# define UNIC_INTPTR_C(VAL) VAL##LL
# define UNIC_PRI_INTPTR "ll"
# define UNIC_SCN_INTPTR "ll"
#else
# define UNIC_INTPTR_C(VAL) VAL##L
# define UNIC_PRI_INTPTR "l"
# define UNIC_SCN_INTPTR "l"
#endif

#define UNIC_PRIiINTPTR UNIC_PRI_INTPTR "i"
#define UNIC_PRIoINTPTR UNIC_PRI_INTPTR "o"
#define UNIC_PRIuINTPTR UNIC_PRI_INTPTR "u"
#define UNIC_PRIxINTPTR UNIC_PRI_INTPTR "x"
#define UNIC_PRIXINTPTR UNIC_PRI_INTPTR "X"

#ifndef PRIxINTPTR
# ifdef UNIC_FALLBACK
#  define PRIiINTPTR UNIC_PRIiINTPTR
#  define PRIoINTPTR UNIC_PRIoINTPTR
#  define PRIuINTPTR UNIC_PRIuINTPTR
#  define PRIxINTPTR UNIC_PRIxINTPTR
#  define PRIXINTPTR UNIC_PRIXINTPTR
# endif
#endif

#define UNIC_SCNiINTPTR UNIC_SCN_INTPTR "i"
#define UNIC_SCNoINTPTR UNIC_SCN_INTPTR "o"
#define UNIC_SCNuINTPTR UNIC_SCN_INTPTR "u"
#define UNIC_SCNxINTPTR UNIC_SCN_INTPTR "x"
#define UNIC_SCNXINTPTR UNIC_SCN_INTPTR "X"

#ifndef SCNxINTPTR
# ifdef UNIC_FALLBACK
#  define SCNiINTPTR UNIC_SCNiINTPTR
#  define SCNoINTPTR UNIC_SCNoINTPTR
#  define SCNuINTPTR UNIC_SCNuINTPTR
#  define SCNxINTPTR UNIC_SCNxINTPTR
#  define SCNXINTPTR UNIC_SCNXINTPTR
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
# define SIZEOF_UINTPTR_T SIZEOF_BY_UMAX(UINTPTR_MAX)
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
typedef int_t intmax_t;
#  define INTMAX_MAX INT_MAX
#  define INTMAX_MIN INT_MIN
# elif defined( LLONG_MAX ) && LLONG_MAX > LONG_MAX
typedef llong_t intmax_t;
#  define INTMAX_MAX LLONG_MAX
#  define INTMAX_MIN LLONG_MIN
# else
typedef long_t intmax_t;
#  define INTMAX_MAX LONG_MAX
#  define INTMAX_MIN LONG_MIN
# endif
#endif /* __intmax_t_defined */


#ifndef SIZEOF_INTMAX_T
# define SIZEOF_INTMAX_T SIZEOF_BY_IMAX(INTMAX_MAX)
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
# define SIZEOF_UINTMAX_T SIZEOF_BY_UMAX(UINTMAX_MAX)
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
# define SIZEOF_INT8_T SIZEOF_BY_IMAX(INT8_MAX)
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
typedef uchar_t uint8_t;
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH == 8
#  define __uint8_t_defined
typedef uint_t uint8_t;
# endif
# ifdef __uint8_t_defined
#  define UINT8_MAX 255
# endif
#endif /* __uint8_t_defined */

#ifdef __uint8_t_defined

#ifndef SIZEOF_UINT8_T
# define SIZEOF_UINT8_T SIZEOF_BY_UMAX(UINT8_MAX)
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
# define SIZEOF_INT_FAST8_T SIZEOF_BY_IMAX(INT_FAST8_MAX)
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
typedef uchar_t uint_fast8_t;
#  define UINT_FAST8_MAX SCHAR_MAX
#  define UINT_FAST8_MIN SCHAR_MIN
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH >= 8
#  define __uint_fast8_t_defined
typedef uint_t uint_fast8_t;
#  define UINT_FAST8_MAX INT_MAX
#  define UINT_FAST8_MIN INT_MIN
# endif
#endif /* __uint_fast8_t_defined */

#ifdef __uint_fast8_t_defined

#ifndef SIZEOF_UINT_FAST8_T
# define SIZEOF_UINT_FAST8_T SIZEOF_BY_UMAX(UINT_FAST8_MAX)
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
# define SIZEOF_INT_LEAST8_T SIZEOF_BY_IMAX(INT_LEAST8_MAX)
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
typedef uchar_t uint_least8_t;
#  define UINT_LEAST8_MAX SCHAR_MAX
#  define UINT_LEAST8_MIN SCHAR_MIN
/* By the time short existed CHAR_WIDTH was already 8 bits, as a result
 * there is no need to check against it */
# elif INT_WIDTH >= 8
#  define __uint_least8_t_defined
typedef uint_t uint_least8_t;
#  define UINT_LEAST8_MAX INT_MAX
#  define UINT_LEAST8_MIN INT_MIN
# endif
#endif /* __uint_least8_t_defined */

#ifdef __uint_least8_t_defined

#ifndef SIZEOF_UINT_LEAST8_T
# define SIZEOF_UINT_LEAST8_T SIZEOF_BY_UMAX(UINT_LEAST8_MAX)
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
