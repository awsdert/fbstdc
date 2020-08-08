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
# ifdef LONG_MAX
typedef long_t ptrdiff_t;
#  define PTRDIFF_MAX LONG_MAX
#  define PTRDIFF_MIN LONG_MIN
# else
typedef int_t ptrdiff_t;
#  define PTRDIFF_MAX INT_MAX
#  define PTRDIFF_MIN INT_MIN
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
# elif PTRDIFF_MAX > ULONG_MAX
#  define PTRDIFF_T_C(VAL) VAL##LL
# else
#  define PTRDIFF_T_C(VAL) VAL##L
# endif
#endif

#ifndef PRI_PTRDIFF_T
# ifndef LONG_MAX
#  define PRI_PTRDIFF_T
# elif PTRDIFF_MAX > ULONG_MAX
#  define PRI_PTRDIFF_T "ll"
# else
#  define PRI_PTRDIFF_T "l"
# endif
#endif

#ifndef SCN_PTRDIFF_T
# ifndef LONG_MAX
#  define SCN_PTRDIFF_T
# elif PTRDIFF_MAX > ULONG_MAX
#  define SCN_PTRDIFF_T "ll"
# else
#  define SCN_PTRDIFF_T "l"
# endif
#endif

#endif /* FBSTDINT_H */
