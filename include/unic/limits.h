#ifndef INC_UNIC_LIMITS_H
#define INC_UNIC_LIMITS_H

#include "arch.h"

#ifndef NO_STDC
# ifdef __cplusplus
#  include <climits>
# else
#  include <limits.h>
# endif
#endif

/* Preprocessor integrals */

#define UNIC_UCCINT_MAX (~0U)
#define UNIC_CCINT_MAX (0 | (UNIC_UCCINT_MAX>>1))
#define UNIC_CCINT_MIN UNIC___MIN(UNIC_CCINT_MAX)

#define UNIC_UCCLONG_MAX (~0UL)
#define UNIC_CCLONG_MAX (0L | (UNIC_UCCLONG_MAX>>1))
#define UNIC_CCLONG_MIN UNIC___MIN(UNIC_CCLONG_MAX)

#define UNIC_UCCLLONG_MAX (~0ULL)
#define UNIC_CCLLONG_MAX (0LL | (UNIC_UCCLLONG_MAX>>1))
#define UNIC_CCLLONG_MIN UNIC___MIN(UNIC_CCLLONG_MAX)

/* Map any and all macros to originals if possible, prevents problems */
#ifdef SIZEOF_CHAR
# define UNIC_SIZEOF_CHAR SIZEOF_CHAR
#else
# define UNIC_SIZEOF_CHAR 1
# ifdef UNIC_FALLBACK
#  define SIZEOF_CHAR UNIC_SIZEOF_CHAR
# endif
#endif

#ifdef CHAR_BIT
# define UNIC_CHAR_BIT CHAR_BIT
#else
# define UNIC_CHAR_BIT UNIC_ARCH_CHAR_WIDTH
# ifdef UNIC_FALLBACK
#  define CHAR_BIT UNIC_CHAR_BIT
# endif
#endif

/* Not specific to UNIC but still helpful */
#ifndef bitsof
# define bitsof(T) (UNIC_CHAR_BIT * sizeof(T))
#endif

#define UNIC_SQUARE(VAL) ((VAL)*(VAL))
#define UNIC___MAX(IMAX_FOR_SIZE) (1U | ((IMAX_FOR_SIZE) << 1))
#define UNIC___MIN(IMAX_FOR_SIZE) ((-(IMAX_FOR_SIZE))-1)
#define UNIC__IMAX(SIZE) (~((~0LL) << ((UNIC_CHAR_BIT*(SIZE))-1)))
#define UNIC__IMIN(SIZE) UNIC___MIN(UNIC__IMAX(SIZE))
#define UNIC__UMAX(SIZE) (~((~0ULL) << (UNIC_CHAR_BIT*(SIZE))))

#define UNIC_1BYTE_MAX UNIC___MAX(1)
#define UNIC_1BYTE_MIN UNIC___MIN(1)
#define UNIC_1BYTE_UMAX UNIC__UMAX(1)

#define UNIC_2BYTE_MAX UNIC___MAX(2)
#define UNIC_2BYTE_MIN UNIC___MIN(2)
#define UNIC_2BYTE_UMAX UNIC__UMAX(2)

#define UNIC_4BYTE_MAX UNIC___MAX(4)
#define UNIC_4BYTE_MIN UNIC___MIN(4)
#define UNIC_4BYTE_UMAX UNIC__UMAX(4)

#define UNIC_8BYTE_MAX UNIC___MAX(8)
#define UNIC_8BYTE_MIN UNIC___MIN(8)
#define UNIC_8BYTE_UMAX UNIC__UMAX(8)

#ifdef CHAR_WIDTH
# define UNIC_CHAR_WIDTH CHAR_WIDTH
#else
# define UNIC_CHAR_WIDTH UNIC_CHAR_BIT
# ifdef UNIC_FALLBACK
#  define CHAR_WIDTH UNIC_CHAR_BIT
# endif
#endif

#ifdef SCHAR_MAX
# define UNIC_SCHAR_MAX SCHAR_MAX
#else
# define UNIC_SCHAR_MAX UNIC__IMAX(1)
# ifdef UNIC_FALLBACK
#  define SCHAR_MAX UNIC_SCHAR_MAX
# endif
#endif

#ifdef SCHAR_MIN
# define UNIC_SCHAR_MIN SCHAR_MIN
#else
# define UNIC_SCHAR_MIN UNIC___MIN(UNIC_SCHAR_MAX)
# ifdef UNIC_FALLBACK
#  define SCHAR_MIN UNIC_SCHAR_MIN
# endif
#endif

#ifdef UCHAR_MAX
# define UNIC_UCHAR_MAX UCHAR_MAX
#else
# define UNIC_UCHAR_MAX UNIC___MAX(UNIC_SCHAR_MAX)
# ifdef UNIC_FALLBACK
#  define UCHAR_MAX UNIC_UCHAR_MAX
# endif
#endif

#ifdef CHAR_SIGNED
# define UNIC_CHAR_SIGNED CHAR_SIGNED
#else
# if defined( __CHAR_UNSIGNED__ )
#  define UNIC_CHAR_SIGNED 0
# elif defined( __CHAR_SIGNED__ )
#  define UNIC_CHAR_SIGNED 1
# elif (char)-1 < 0
#  define UNIC_CHAR_SIGNED 1
# else
#  define UNIC_CHAR_SIGNED 0
# endif
# ifdef UNIC_FALLBACK
#  define CHAR_SIGNED UNIC_CHAR_SIGNED
# endif
#endif

#ifdef CHAR_UNSIGNED
# define UNIC_CHAR_UNSIGNED CHAR_UNSIGNED
#else
# if UNIC_CHAR_SIGNED
#  define CHAR_UNSIGNED 0
# else
#  define CHAR_UNSIGNED 1
# endif
# ifdef UNIC_FALLBACK
#  define CHAR_UNSIGNED UNIC_CHAR_UNSIGNED
# endif
#endif

#ifdef CHAR_MAX
# define UNIC_CHAR_MAX CHAR_MAX
#else
# if UNIC_CHAR_SIGNED
#  define UNIC_CHAR_MAX UNIC_SCHAR_MAX
# else
#  define UNIC_CHAR_MAX UNIC_UCHAR_MAX
# endif
# ifdef UNIC_FALLBACK
#  define CHAR_MAX UNIC_CHAR_MAX
# endif
#endif

#ifdef CHAR_MIN
# define UNIC_CHAR_MIN CHAR_MIN
#else
# if UNIC_CHAR_SIGNED
#  define UNIC_CHAR_MIN UNIC_SCHAR_MIN
# else
#  define UNIC_CHAR_MIN 0
# endif
# ifdef UNIC_FALLBACK
#  define CHAR_MIN UNIC_CHAR_MIN
# endif
#endif

#ifndef SUPPORTED_SIZEOF_LIMIT
#define SUPPORTED_SIZEOF_LIMIT 8
#undef _SIZEOF_BY_UMAX
#define _SIZEOF_BY_UMAX(UMAX,SIZE,TRUE) \
	(((UMAX) > (UMAX_FOR_##SIZE##BYTE)) ? (TRUE) : SIZE)
#undef SIZEOF_BY_UMAX
#define SIZEOF_BY_UMAX(UMAX) \
	_SIZEOF_BY_UMAX(UMAX,1,\
		_SIZEOF_BY_UMAX(UMAX,2,\
			_SIZEOF_BY_UMAX(UMAX,4,\
				_SIZEOF_BY_UMAX(UMAX,8,\
					SUPPORTED_SIZEOF_LIMIT))))
#undef _SIZEOF_BY_IMAX
#define _SIZEOF_BY_IMAX(IMAX,SIZE,TRUE) \
	(((IMAX) > (MAX_FOR_##SIZE##BYTE)) ? (TRUE) : SIZE)
#undef SIZEOF_BY_IMAX
#define SIZEOF_BY_IMAX(IMAX) \
	_SIZEOF_BY_IMAX(IMAX,1,\
		_SIZEOF_BY_IMAX(IMAX,2,\
			_SIZEOF_BY_IMAX(IMAX,4,\
				_SIZEOF_BY_IMAX(IMAX,8,\
					SUPPORTED_SIZEOF_LIMIT))))
#endif

#define UNIC_SIZEOF_CCINT SIZEOF_BY_UMAX(~0u)
#define UNIC_CCINT_WIDTH (SIZEOF_CCINT * CHAR_BIT)

#ifdef SHRT_MAX
# define UNIC_SHRT_MAX SHRT_MAX
#else
# define UNIC_SHRT_MAX UNIC_2BYTE_MAX
# ifdef UNIC_FALLBACK
#  define SHRT_MAX UNIC_SHRT_MAX
# endif
#endif

#ifdef SHRT_MIN
# define UNIC_SHRT_MIN SHRT_MIN
#else
# define UNIC_SHRT_MIN UNIC___MIN(UNIC_SHRT_MAX)
# ifdef UNIC_FALLBACK
#  define SHRT_MIN UNIC_SHRT_MIN
# endif
#endif

#ifdef USHRT_MAX
# define UNIC_USHRT_MAX USHRT_MAX
#else
# define UNIC_USHRT_MAX UNIC___MAX(UNIC_SHRT_MAX)
# ifdef UNIC_FALLBACK
#  define USHRT_MAX UNIC_USHRT_MAX
# endif
#endif

#ifdef SIZEOF_SHRT
# define UNIC_SIZEOF_SHRT SIZEOF_SHRT
#else
# define UNIC_SIZEOF_SHRT SIZEOF_BY_UMAX(UNIC_USHRT_MAX)
# ifdef UNIC_FALLBACK
#  define SIZEOF_SHRT UNIC_SIZEOF_SHRT
# endif
#endif

#ifdef SHRT_WIDTH
# define UNIC_SHRT_WIDTH SHRT_WIDTH
#else
# define UNIC_SHRT_WIDTH (UNIC_SIZEOF_SHRT * UNIC_CHAR_BIT)
# ifdef UNIC_FALLBACK
#  define SHRT_WIDTH UNIC_SHRT_WIDTH
# endif
#endif

#ifdef INT_MAX
# define UNIC_INT_MAX INT_MAX
#else
# define UNIC_INT_MAX CCINT_MAX
# ifdef UNIC_FALLBACK
#  define INT_MAX UNIC_INT_MAX
# endif
#endif

#ifdef INT_MIN
# define UNIC_INT_MIN INT_MIN
# else
# define UNIC_INT_MIN UNIC___MIN(UNIC_INT_MAX)
# ifdef UNIC_FALLBACK
#  define INT_MIN UNIC_INT_MIN
# endif
#endif

#ifdef UINT_MAX
# define UNIC_UINT_MAX UINT_MAX
#else
# define UNIC_UINT_MAX UNIC___MAX(UNIC_INT_MAX)
# ifdef UNIC_FALLBACK
#  define UINT_MAX UNIC_UINT_MAX
# endif
#endif

#ifdef SIZEOF_INT
# define UNIC_SIZEOF_INT SIZEOF_INT
#else
# define UNIC_SIZEOF_INT SIZEOF_BY_UMAX(UNIC_UINT_MAX)
# ifdef UNIC_FALLBACK
#  define SIZEOF_INT UNIC_SIZEOF_INT
# endif
#endif

#ifdef INT_WIDTH
# define UNIC_INT_WIDTH INT_WIDTH
#else
# define UNIC_INT_WIDTH (UNIC_SIZEOF_INT * UNIC_CHAR_BIT)
# ifdef UNIC_FALLBACK
#  define INT_WIDTH UNIC_INT_WIDTH
# endif
#endif

#ifdef LONG_MAX
# define UNIC_LONG_MAX LONG_MAX
#else
# define UNIC_LONG_MAX CCLONG_MAX
# ifdef UNIC_FALLBACK
#  define LONG_MAX UNIC_LONG_MAX
# endif
#endif

#ifdef LONG_MIN
# define UNIC_LONG_MIN LONG_MIN
# else
# define UNIC_LONG_MIN UNIC___MIN(UNIC_LONG_MAX)
# ifdef UNIC_FALLBACK
#  define LONG_MIN UNIC_LONG_MIN
# endif
#endif

#ifdef ULONG_MAX
# define UNIC_ULONG_MAX ULONG_MAX
#else
# define UNIC_ULONG_MAX UNIC___MAX(UNIC_LONG_MAX)
# ifdef UNIC_FALLBACK
#  define ULONG_MAX UNIC_ULONG_MAX
# endif
#endif

#ifdef SIZEOF_LONG
# define UNIC_SIZEOF_LONG SIZEOF_LONG
#else
# define UNIC_SIZEOF_LONG SIZEOF_BY_UMAX(UNIC_ULONG_MAX)
# ifdef UNIC_FALLBACK
#  define SIZEOF_LONG UNIC_SIZEOF_LONG
# endif
#endif

#ifdef LONG_WIDTH
# define UNIC_LONG_WIDTH LONG_WIDTH
#else
# define UNIC_LONG_WIDTH (UNIC_SIZEOF_LONG * UNIC_CHAR_BIT)
# ifdef UNIC_FALLBACK
#  define LONG_WIDTH UNIC_LONG_WIDTH
# endif
#endif

#ifdef LLONG_MAX
# define UNIC_LLONG_MAX LLONG_MAX
#elif defined( LONG_LONG_MAX )
# define UNIC_LLONG_MAX LONG_LONG_MAX
#else
# define UNIC_LLONG_MAX CCLLONG_MAX
#endif

#ifndef LLONG_MAX
# ifdef UNIC_FALLBACK
#  define LLONG_MAX UNIC_LLONG_MAX
# endif
#endif

#ifndef LONG_LONG_MAX
# ifdef UNIC_FALLBACK
#  define LONG_LONG_MAX UNIC_LLONG_MAX
# endif
#endif

#ifdef LLONG_MIN
# define UNIC_LLONG_MIN LLONG_MIN
#elif defined( LONG_LONG_MIN )
# define UNIC_LLONG_MIN LONG_LONG_MIN
#else
# define UNIC_LLONG_MIN UNIC___MIN(UNIC_LLONG_MAX)
#endif

#ifndef LLONG_MIN
# ifdef UNIC_FALLBACK
#  define LLONG_MIN UNIC_LLONG_MIN
# endif
#endif

#ifndef LONG_LONG_MIN
# ifdef UNIC_FALLBACK
#  define LONG_LONG_MIN UNIC_LLONG_MIN
# endif
#endif

#ifdef ULLONG_MAX
# define UNIC_ULLONG_MAX ULLONG_MAX
#elif defined( ULONG_LONG_MAX )
# define UNIC_ULLONG_MAX ULONG_LONG_MAX
#else
# define UNIC_ULLONG_MAX UNIC___MAX(UNIC_LLONG_MAX)
#endif

#ifndef ULLONG_MAX
# ifdef UNIC_FALLBACK
#  define ULLONG_MAX UNIC_ULLONG_MAX
# endif
#endif

#ifndef ULONG_LONG_MAX
# ifdef UNIC_FALLBACK
#  define ULONG_LONG_MAX UNIC_ULLONG_MAX
# endif
#endif

#ifdef SIZEOF_LLONG
# define UNIC_SIZEOF_LLONG SIZEOF_LLONG
#elif defined(SIZEOF_LONG_LONG)
# define UNIC_SIZEOF_LLONG SIZEOF_LONG_LONG
#else
# define UNIC_SIZEOF_LLONG SIZEOF_BY_UMAX(UNIC_ULLONG_MAX)
#endif

#ifndef SIZEOF_LLONG
# ifdef UNIC_FALLBACK
#  define SIZEOF_LLONG UNIC_SIZEOF_LLONG
# endif
#endif

#ifndef SIZEOF_LONG_LONG
# ifdef UNIC_FALLBACK
#  define SIZEOF_LONG_LONG UNIC_SIZEOF_LLONG
# endif
#endif

#ifdef LLONG_WIDTH
# define UNIC_LLONG_WIDTH LLONG_WIDTH
#elif defined( LONG_LONG_WIDTH )
# define UNIC_LLONG_WIDTH LONG_LONG_WIDTH
#else
# define UNIC_LLONG_WIDTH (UNIC_SIZEOF_LLONG * UNIC_CHAR_BIT)
#endif

#ifndef LLONG_WIDTH
# ifdef UNIC_FALLBACK
#  define LLONG_WIDTH UNIC_LLONG_WIDTH
# endif
#endif

#ifndef LONG_LONG_WIDTH
# ifdef UNIC_FALLBACK
#  define LONG_LONG_WIDTH UNIC_LLONG_WIDTH
# endif
#endif

#define UNIC_LONG_LONG_MAX UNIC_LLONG_MAX
#define UNIC_LONG_LONG_MIN UNIC_LLONG_MIN
#define UNIC_ULONG_LONG_MAX UNIC_ULLONG_MAX
#define UNIC_SIZEOF_LONG_LONG UNIC_SIZEOF_LLONG
#define UNIC_LONG_LONG_WIDTH UNIC_LLONG_WIDTH

#endif /* INC_UNIC_LIMITS_H */
