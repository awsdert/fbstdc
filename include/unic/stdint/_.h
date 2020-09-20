#ifndef INC_UNIC_STDINT__H
#define INC_UNIC_STDINT__H

#include "../limits.h"

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

#ifndef __bool_true_false_are_defined
# define __bool_true_false_are_defined
# ifndef __cplusplus
typedef _Bool bool;
#  define false 0
#  define true !false
# endif
#endif

/* Common typedefs that SHOULD be in standard C but aren't */

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

#define UNIC_CAN_MAP__EXACTLY_8BIT (UNIC_CHAR_BIT == 8)
#define UNIC_CAN_MAP__EXACTLY_16BIT \
	(UNIC_SHRT_WIDTH == 16) | (UNIC_INT_WIDTH == 16)
#define UNIC_CAN_MAP__EXACTLY_32BIT \
	(UNIC_INT_WIDTH == 32) | (UNIC_LONG_WIDTH == 32)
#define UNIC_CAN_MAP__EXACTLY_64BIT \
	(UNIC_INT_WIDTH == 64) | (UNIC_LONG_WIDTH == 64) | (UNIC_LLONG_WIDTH == 64)
	
#define UNIC_CAN_MAP_AT_LEAST_8BIT (UNIC_CHAR_BIT >= 8)
#define UNIC_CAN_MAP_AT_LEAST_16BIT \
	(UNIC_SHRT_WIDTH >= 16) | (UNIC_INT_WIDTH >= 16)
#define UNIC_CAN_MAP_AT_LEAST_32BIT \
	(UNIC_INT_WIDTH >= 32) | (UNIC_LONG_WIDTH >= 32)
#define UNIC_CAN_MAP_AT_LEAST_64BIT \
	(UNIC_INT_WIDTH >= 64) | (UNIC_LONG_WIDTH >= 64) | (UNIC_LLONG_WIDTH >= 64)

#endif
