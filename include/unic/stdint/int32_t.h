#if !defined( UNIC_INT32_C ) && UNIC_CAN_MAP__EXACTLY_32BIT
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INT32_MAX
# define UNIC_INT32_MAX INT32_MAX
#elif UNIC_INT_WIDTH == 32
# define UNIC_INT32_MAX UNIC_INT_MAX
#else
# define UNIC_INT32_MAX UNIC_LONG_MAX
#endif

#ifdef INT32_MIN
# define UNIC_INT32_MIN INT32_MIN
#else
# define UNIC_INT32_MIN UNIC___MIN(UNIC_INT32_MAX)
#endif

#ifdef INT32_END_BIT
# define UNIC_INT32_END_BIT INT32_END_BIT
#else
# define UNIC_INT32_END_BIT UNIC_INT32_MIN
#endif

#ifdef SIZEOF_SIZE
# define UNIC_SIZEOF_INT32 SIZEOF_INT32
#else
# define UNIC_SIZEOF_INT32 SIZEOF_BY_IMAX(INT32_MAX)
#endif

#ifdef INT32_WIDTH
# define UNIC_INT32_WIDTH INT32_WIDTH
#else
# define UNIC_INT32_WIDTH (UNIC_SIZEOF_INT32 * UNIC_CHAR_BIT)
#endif

#ifdef INT32_TYPE
# define UNIC_INT32_TYPE INT32_TYPE
#elif UNIC_INT_WIDTH == 32
# define UNIC_INT32_TYPE signed int
#else
# define UNIC_INT32_TYPE signed long int
#endif

typedef UNIC_INT32_TYPE unic_int32_t;

#ifdef INT32_C
# define UNIC_INT32_C INT32_C
#elif UNIC_INT_WIDTH == 32
# define UNIC_INT32_C(VAL) VAL
#else
# define UNIC_INT32_C(VAL) VAL##L
#endif

#ifdef PRI_INT32
# define UNIC_PRI_INT32 PRI_INT32
#elif UNIC_INT_WIDTH == 32
# define UNIC_PRI_INT32
#else
# define UNIC_PRI_INT32 "l"
#endif

#ifdef SCN_INT32
# define UNIC_SCN_INT32 SCN_INT32
#elif UNIC_INT_WIDTH == 32
# define UNIC_SCN_INT32
#else
# define UNIC_SCN_INT32 "l"
#endif

#define UNIC_PRIiINT32 UNIC_PRI_INT32 "i"
#define UNIC_PRIoINT32 UNIC_PRI_INT32 "o"
#define UNIC_PRIuINT32 UNIC_PRI_INT32 "u"
#define UNIC_PRIxINT32 UNIC_PRI_INT32 "x"
#define UNIC_PRIXINT32 UNIC_PRI_INT32 "X"

#define UNIC_SCNiINT32 UNIC_SCN_INT32 "i"
#define UNIC_SCNoINT32 UNIC_SCN_INT32 "o"
#define UNIC_SCNuINT32 UNIC_SCN_INT32 "u"
#define UNIC_SCNxINT32 UNIC_SCN_INT32 "x"
#define UNIC_SCNXINT32 UNIC_SCN_INT32 "X"

#ifdef UNIC_FALLBACK

# ifndef __int32_t_defined
#  define __int32_t_defined
typedef unic_int32_t int32_t;
# endif

#ifndef INT32_MAX
# define INT32_MAX UNIC_INT32_MAX
#endif

#ifndef INT32_MIN
# define INT32_MIN UNIC_INT32_MIN
#endif

#ifndef SIZEOF_INT32
# define SIZEOF_INT32 UNIC_SIZEOF_INT32
#endif

#ifndef INT32_WIDTH
# define INT32_WIDTH UNIC_INT32_WIDTH
#endif

#ifndef INT32_TYPE
# define INT32_TYPE UNIC_INT32_TYPE
#endif

#ifndef INT32_C
# define INT32_C UNIC_INT32_C
#endif

#ifndef PRIxINT32
# define PRIiINT32 UNIC_PRIiINT32
# define PRIoINT32 UNIC_PRIoINT32
# define PRIuINT32 UNIC_PRIuINT32
# define PRIxINT32 UNIC_PRIxINT32
# define PRIXINT32 UNIC_PRIXINT32
#endif

#ifndef SCNxINT32
# define SCNiINT32 UNIC_SCNiINT32
# define SCNoINT32 UNIC_SCNoINT32
# define SCNuINT32 UNIC_SCNuINT32
# define SCNxINT32 UNIC_SCNxINT32
# define SCNXINT32 UNIC_SCNXINT32
#endif

#endif /* UNIC_FALLBACK */

#endif
