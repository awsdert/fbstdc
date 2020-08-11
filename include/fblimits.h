#ifndef FBLIMITS_H
#define FBLIMITS_H

#include "fbarch.h"

#ifndef NO_STDC
# ifdef __cplusplus
#  include <climits>
# else
#  include <limits.h>
# endif
#endif

#ifndef SIZEOF_CHAR
# define SIZEOF_CHAR 1
#endif

#ifndef CHAR_BIT
# define CHAR_BIT FB_ARCH_CHAR_WIDTH
#endif

#ifndef CHAR_WIDTH
#define CHAR_WIDTH CHAR_BIT
#endif

#ifndef UCHAR_MAX
#define UCHAR_MAX (~((~0u) << CHAR_BIT))
#endif

#ifndef SCHAR_MAX
#define SCHAR_MAX (~((~0) << (CHAR_BIT-1)))
#endif

#ifndef SCHAR_MIN
#define SCHAR_MIN ((-SCHAR_MAX)-1)
#endif

#ifndef CHAR_SIGNED
# if defined( __CHAR_UNSIGNED__ )
# elif defined( __CHAR_SIGNED__ )
#  define CHAR_SIGNED
# elif ('\0'|(1 << (CHAR_BIT-1))) < 0
#  define CHAR_SIGNED
# endif
#endif

#ifndef CHAR_UNSIGNED
# ifndef CHAR_SIGNED
#  define CHAR_UNSIGNED
# endif
#endif

#ifndef CHAR_MAX
# ifdef CHAR_SIGNED
#  define CHAR_MAX SCHAR_MAX
# else
#  define CHAR_MAX UCHAR_MAX
# endif
#endif

#ifndef CHAR_MIN
# ifdef CHAR_SIGNED
#  define CHAR_MIN SCHAR_MIN
# else
#  define CHAR_MIN 0u
# endif
#endif

#ifndef NEGATE
#define NEGATE(VAL) (-(VAL))
#endif

#define MIN_FOR_SIZE(MAX_FOR_SAME_SIZE) ((NEGATE(MAX_FOR_SAME_SIZE))-1)

/* Preprocessor integrals */

#ifndef UCCINT_MAX
#define UCCINT_MAX (~0u)
#endif

#ifndef CCINT_MAX
#define CCINT_MAX (0 | (UCCINT_MAX>>1))
#endif

#ifndef CCINT_MIN
#define CCINT_MIN MIN_FOR_SIZE(CCINT_MAX)
#endif

#ifndef UCCLONG_MAX
#define UCCLONG_MAX (~0lu)
#endif

#ifndef CCLONG_MAX
#define CCLONG_MAX (0l | (UCCLONG_MAX>>1))
#endif

#ifndef CCLONG_MIN
#define CCLONG_MIN MIN_FOR_SIZE(CCLONG_MAX)
#endif

#ifndef UCCLLONG_MAX
#define UCCLLONG_MAX (~0llu)
#endif

#ifndef CCLLONG_MAX
#define CCLLONG_MAX (0ll | (UCCLLONG_MAX>>1))
#endif

#ifndef CCLLONG_MIN
#define CCLLONG_MIN MIN_FOR_SIZE(CCLLONG_MAX)
#endif

#define SQUARE(VAL) ((VAL)*(VAL))
#define UMAX_FOR_SIZE(PRV) \
	(((PRV) >= UCCINT_MAX) ? PRV : (((PRV) * ((PRV) + 2))))

#define MAX_FOR_SIZE(PRV) \
	(((PRV) >= CCINT_MAX) ? PRV : ((PRV) * ((PRV) + (PRV) + 4)) + 1)

#ifndef UMAX_FOR_1BYTE
#define UMAX_FOR_1BYTE UCHAR_MAX
#endif

#ifndef MAX_FOR_1BYTE
#define MAX_FOR_1BYTE SCHAR_MAX
#endif

#ifndef MIN_FOR_1BYTE
#define MIN_FOR_1BYTE SCHAR_MIN
#endif

#ifndef UMAX_FOR_2BYTE
#if UCCINT_MAX > UMAX_FOR_1BYTE
#define UMAX_FOR_2BYTE UMAX_FOR_SIZE(UMAX_FOR_1BYTE)
#else
#define UMAX_FOR_2BYTE UCCLONG_MAX
#define UMAX_FOR_2BYTE_ASSUMED
#endif
#endif /* MAX_FOR_2BYTE */

#ifndef MAX_FOR_2BYTE
#if CCINT_MAX > MAX_FOR_1BYTE
#define MAX_FOR_2BYTE MAX_FOR_SIZE(MAX_FOR_1BYTE)
#else
#define MAX_FOR_2BYTE CCLONG_MAX
#define MAX_FOR_2BYTE_ASSUMED
#endif
#endif /* MAX_FOR_2BYTE */

#ifndef MIN_FOR_2BYTE
#define MIN_FOR_2BYTE MIN_FOR_SIZE(MAX_FOR_2BYTE)
#endif /* MIN_FOR_2BYTE */

#ifndef UMAX_FOR_4BYTE
#if UCCINT_MAX > UMAX_FOR_2BYTE
#define UMAX_FOR_4BYTE UMAX_FOR_SIZE(UMAX_FOR_2BYTE)
#else
#define UMAX_FOR_4BYTE UCCLONG_MAX
#define UMAX_FOR_4BYTE_ASSUMED
#endif
#endif /* UMAX_FOR_4BYTE */

#ifndef MAX_FOR_4BYTE
#if CCINT_MAX > MAX_FOR_2BYTE
#define MAX_FOR_4BYTE MAX_FOR_SIZE(MAX_FOR_2BYTE)
#else
#define MAX_FOR_4BYTE CCLONG_MAX
#define MAX_FOR_4BYTE_ASSUMED
#endif
#endif /* MAX_FOR_4BYTE */

#ifndef MIN_FOR_4BYTE
#define MIN_FOR_4BYTE MIN_FOR_SIZE(MAX_FOR_4BYTE)
#endif /* MIN_FOR_4BYTE */

#ifndef UMAX_FOR_8BYTE
#if UCCINT_MAX > UMAX_FOR_4BYTE
#define UMAX_FOR_8BYTE UMAX_FOR_SIZE(UMAX_FOR_4BYTE)
#else
#define UMAX_FOR_8BYTE UCCLLONG_MAX
#define UMAX_FOR_8BYTE_ASSUMED
#endif
#endif /* MAX_FOR_8BYTE */

#ifndef MAX_FOR_8BYTE
#if CCINT_MAX > MAX_FOR_4BYTE
#define MAX_FOR_8BYTE MAX_FOR_SIZE(MAX_FOR_4BYTE)
#else
#define MAX_FOR_8BYTE CCLLONG_MAX
#define MAX_FOR_8BYTE_ASSUMED
#endif
#endif /* MAX_FOR_8BYTE */

#ifndef MIN_FOR_8BYTE
#define MIN_FOR_8BYTE MIN_FOR_SIZE(MAX_FOR_8BYTE)
#endif /* MIN_FOR_8BYTE */

#ifndef SUPPORTED_SIZEOF_LIMIT
#define SUPPORTED_SIZEOF_LIMIT 8
#undef _SIZEOF
#define _SIZEOF(UMAX,SIZE,TRUE) \
	(((UMAX) > (MAX_FOR_##SIZE##BYTE)) ? (TRUE) : SIZE)
#undef SIZEOF
#define SIZEOF(UMAX) \
	_SIZEOF(UMAX,1,_SIZEOF(UMAX,2,_SIZEOF(UMAX,4,_SIZEOF(UMAX,8,SUPPORTED_SIZEOF_LIMIT))))
#endif

#ifndef SIZEOF_CCINT
#define SIZEOF_CCINT SIZEOF(~0u)
#endif

#ifndef CCINT_WIDTH
#define CCINT_WIDTH (SIZEOF_CCINT * CHAR_BIT)
#endif

#ifndef SHRT_MAX
#define SHRT_MAX MAX_FOR_2BYTE
#endif

#ifndef SHRT_MIN
#define SHRT_MIN ((-SHRT_MAX)-1)
#endif

#ifndef USHRT_MAX
#define USHRT_MAX (0u | (SHRT_MAX << 1) | 1u)
#endif

#ifndef SIZEOF_SHRT
#define SIZEOF_SHRT SIZEOF(USHRT_MAX)
#endif

#ifndef SHRT_WIDTH
#define SHRT_WIDTH (SIZEOF_SHRT * CHAR_BIT)
#endif

#ifndef INT_MAX
#define INT_MAX CCINT_MAX
#endif

#ifndef INT_MIN
#define INT_MIN ((-INT_MAX)-1)
#endif

#ifndef UINT_MAX
#define UINT_MAX (0u | (INT_MAX << 1) | 1u)
#endif


#ifndef SIZEOF_INT
#define SIZEOF_INT SIZEOF(UINT_MAX)
#endif

#ifndef INT_WIDTH
#define INT_WIDTH (SIZEOF_INT * CHAR_BIT)
#endif

#ifdef CCLONG_MAX

#ifndef LONG_MAX
#define LONG_MAX CCLONG_MAX
#endif

#ifndef LONG_MIN
#define LONG_MIN ((-LONG_MAX)-1)
#endif

#ifndef ULONG_MAX
#define ULONG_MAX (0lu | (LONG_MAX << 1) | 1lu)
#endif

#ifndef SIZEOF_LONG
#define SIZEOF_LONG SIZEOF(ULONG_MAX)
#endif

#ifndef LONG_WIDTH
#define LONG_WIDTH (SIZEOF_LONG * CHAR_BIT)
#endif

#endif

#ifdef CCLLONG_MAX

#ifndef LLONG_MAX
#define LLONG_MAX CCLLONG_MAX
#endif

#ifndef LLONG_MIN
#define LLONG_MIN ((-LLONG_MAX)-1)
#endif

#ifndef ULLONG_MAX
#define ULLONG_MAX (0llu | (LLONG_MAX << 1) | 1llu)
#endif

#ifndef SIZEOF_LLONG
#define SIZEOF_LLONG SIZEOF(ULLONG_MAX)
#endif

#ifndef LLONG_WIDTH
#define LLONG_WIDTH (SIZEOF_LLONG * CHAR_BIT)
#endif

#endif /* CCLLONG_MAX */

#endif /* FBLIMITS_H */
