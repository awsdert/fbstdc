#ifndef UNIC_INTMAX_C
#include "int_fast8_t.h"
#include "int_fast16_t.h"
#include "int_fast32_t.h"
#include "int_fast64_t.h"
#include "uintmax_t.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef INTMAX_MAX
# define UNIC_INTMAX_MAX INTMAX_MAX
#elif defined( UNIC_INT_FAST64_MAX )
# define UNIC_INTMAX_MAX UNIC_INT_FAST64_MAX
#elif defined( UNIC_INT_FAST32_MAX )
# define UNIC_INTMAX_MAX UNIC_INT_FAST32_MAX
#elif defined( UNIC_INT_FAST16_MAX )
# define UNIC_INTMAX_MAX UNIC_INT_FAST16_MAX
#elif defined( UNIC_INT_FAST8_MAX )
# define UNIC_INTMAX_MAX UNIC_INT_FAST8_MAX
#else
# define UNIC_INTMAX_MAX UNIC_INT_MAX
#endif

#ifdef INTMAX_MIN
# define UNIC_INTMAX_MIN INTMAX_MIN
#else
# define UNIC_INTMAX_MIN UNIC___MIN(UNIC_INTMAX_MAX)
#endif

#ifdef INTMAX_END_BIT
# define UNIC_INTMAX_END_BIT INTMAX_END_BIT
#else
# define UNIC_INTMAX_END_BIT UNIC_INTMAX_MIN
#endif

#ifdef SIZEOF_INTMAX
# define UNIC_SIZEOF_INTMAX SIZEOF_INTMAX
#else
# define UNIC_SIZEOF_INTMAX UNIC_SIZEOF_BY_IMAX(INTMAX_MAX)
#endif

#ifdef INTMAX_WIDTH
# define UNIC_INTMAX_WIDTH INTMAX_WIDTH
#else
# define UNIC_INTMAX_WIDTH (UNIC_SIZEOF_INTMAX * UNIC_CHAR_BIT)
#endif

#ifdef INTMAX_TYPE
# define UNIC_INTMAX_TYPE INTMAX_TYPE
#elif UNIC_INTMAX_MAX == UNIC_INT_MAX
# define UNIC_INTMAX_TYPE int
#elif UNIC_INTMAX_MAX > UNIC_LONG_MAX
# define UNIC_INTMAX_TYPE long long int
#else
# define UNIC_INTMAX_TYPE long int
#endif

typedef UNIC_INTMAX_TYPE unic_intmax_t;

#ifdef INTMAX_C
# define UNIC_INTMAX_C INTMAX_C
#elif UNIC_INTMAX_MAX == UNIC_INT_MAX
# define UNIC_INTMAX_C(VAL) VAL
#elif UNIC_INTMAX_MAX > UNIC_LONG_MAX
# define UNIC_INTMAX_C(VAL) VAL##LL
#else
# define UNIC_INTMAX_C(VAL) VAL##L
#endif

#ifdef PRI_INTMAX
# define UNIC_PRI_INTMAX PRI_INTMAX
#elif UNIC_INTMAX_MAX == UNIC_INT_MAX
# define UNIC_PRI_INTMAX
#elif UNIC_INTMAX_MAX > UNIC_LONG_MAX
# define UNIC_PRI_INTMAX "ll"
#else
# define UNIC_PRI_INTMAX "l"
#endif

#ifdef SCN_INTMAX
# define UNIC_SCN_INTMAX SCN_INTMAX
#elif UNIC_INTMAX_MAX == UNIC_INT_MAX
# define UNIC_SCN_INTMAX
#elif UNIC_INTMAX_MAX > UNIC_LONG_MAX
# define UNIC_SCN_INTMAX "ll"
#else
# define UNIC_SCN_INTMAX "l"
#endif

#define UNIC_PRIiINTMAX UNIC_PRI_INTMAX "i"
#define UNIC_PRIoINTMAX UNIC_PRI_INTMAX "o"
#define UNIC_PRIuINTMAX UNIC_PRI_INTMAX "u"
#define UNIC_PRIxINTMAX UNIC_PRI_INTMAX "x"
#define UNIC_PRIXINTMAX UNIC_PRI_INTMAX "X"

#define UNIC_SCNiINTMAX UNIC_SCN_INTMAX "i"
#define UNIC_SCNoINTMAX UNIC_SCN_INTMAX "o"
#define UNIC_SCNuINTMAX UNIC_SCN_INTMAX "u"
#define UNIC_SCNxINTMAX UNIC_SCN_INTMAX "x"
#define UNIC_SCNXINTMAX UNIC_SCN_INTMAX "X"

#ifdef UNIC_FALLBACK

# ifndef INTMAX_C
typedef unic_intmax_t intmax_t;
typedef unic_uintmax_t uintmax_t;
# define INTMAX_C UNIC_INTMAX_C
/* UINTMAX_C will already be defined in uintmax_t.h */
#endif

#ifndef INTMAX_MAX
# define INTMAX_MAX UNIC_INTMAX_MAX
#endif

#ifndef INTMAX_MIN
# define INTMAX_MIN UNIC_INTMAX_MIN
#endif

#ifndef SIZEOF_INTMAX
# define SIZEOF_INTMAX UNIC_SIZEOF_INTMAX
#endif

#ifndef INTMAX_WIDTH
# define INTMAX_WIDTH UNIC_INTMAX_WIDTH
#endif

#ifndef INTMAX_TYPE
# define INTMAX_TYPE UNIC_INTMAX_TYPE
#endif

#ifndef INTMAX_C
# define INTMAX_C UNIC_INTMAX_C
#endif

#ifndef PRIxINTMAX
# define PRIiINTMAX UNIC_PRIiINTMAX
# define PRIoINTMAX UNIC_PRIoINTMAX
# define PRIuINTMAX UNIC_PRIuINTMAX
# define PRIxINTMAX UNIC_PRIxINTMAX
# define PRIXINTMAX UNIC_PRIXINTMAX
#endif

#ifndef SCNxINTMAX
# define SCNiINTMAX UNIC_SCNiINTMAX
# define SCNoINTMAX UNIC_SCNoINTMAX
# define SCNuINTMAX UNIC_SCNuINTMAX
# define SCNxINTMAX UNIC_SCNxINTMAX
# define SCNXINTMAX UNIC_SCNXINTMAX
#endif

#endif /* UNIC_FALLBACK */

#endif
