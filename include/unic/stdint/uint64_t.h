#if !defined( UNIC_UINT64_C ) && UNIC_CAN_MAP__EXACTLY_64BIT
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT64_MAX
# define UNIC_UINT64_MAX UINT64_MAX
#elif UNIC_INT_WIDTH == 64
# define UNIC_UINT64_MAX UNIC_UINT_MAX
#elif UNIC_LONG_WIDTH == 64
# define UNIC_UINT64_MAX UNIC_ULONG_MAX
#else
# define UNIC_UINT64_MAX UNIC_ULLONG_MAX
#endif

#ifdef UINT64_END_BIT
# define UNIC_UINT64_END_BIT UINT64_END_BIT
#else
# define UNIC_UINT64_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT64
# define UNIC_SIZEOF_UINT64 SIZEOF_UINT64
#else
# define UNIC_SIZEOF_UINT64 SIZEOF_BY_UMAX(UNIC_UINT64_MAX)
#endif

#ifdef UINT64_WIDTH
# define UNIC_UINT64_WIDTH UINT64_WIDTH
#else
# define UNIC_UINT64_WIDTH (UNIC_SIZEOF_UINT64 * UNIC_CHAR_BIT)
#endif

#ifdef UINT64_TYPE
# define UNIC_UINT64_TYPE UINT64_TYPE
#elif UNIC_INT_WIDTH == 64
# define UNIC_UINT64_TYPE unsigned int
#elif UNIC_LONG_WIDTH == 64
# define UNIC_UINT64_TYPE unsigned long int
#else
# define UNIC_UINT64_TYPE unsigned long long int
#endif

typedef UNIC_UINT64_TYPE unic_uint64_t;

#ifdef UINT64_C
# define UNIC_UINT64_C UINT64_C
#elif UNIC_INT_WIDTH == 64
# define UNIC_UINT64_C(VAL) VAL
#elif UNIC_LONG_WIDTH == 64
# define UNIC_UINT64_C(VAL) VAL##UL
#else
# define UNIC_UINT64_C(VAL) VAL##ULL
#endif

#ifdef PRI_UINT64
# define UNIC_PRI_UINT64 PRI_UINT64
#elif UNIC_INT_WIDTH == 64
# define UNIC_PRI_UINT64
#elif UNIC_LONG_WIDTH == 64
# define UNIC_PRI_UINT64 "l"
#else
# define UNIC_PRI_UINT64 "ll"
#endif

#ifdef SCN_UINT64
# define UNIC_SCN_UINT64 SCN_UINT64
#elif UNIC_INT_WIDTH == 64
# define UNIC_SCN_UINT64
#elif UNIC_LONG_WIDTH == 64
# define UNIC_SCN_UINT64 "l"
#else
# define UNIC_SCN_UINT64 "ll"
#endif

#define UNIC_PRIiUINT64 UNIC_PRI_UINT64 "i"
#define UNIC_PRIoUINT64 UNIC_PRI_UINT64 "o"
#define UNIC_PRIuUINT64 UNIC_PRI_UINT64 "u"
#define UNIC_PRIxUINT64 UNIC_PRI_UINT64 "x"
#define UNIC_PRIXUINT64 UNIC_PRI_UINT64 "X"

#define UNIC_SCNiUINT64 UNIC_SCN_UINT64 "i"
#define UNIC_SCNoUINT64 UNIC_SCN_UINT64 "o"
#define UNIC_SCNuUINT64 UNIC_SCN_UINT64 "u"
#define UNIC_SCNxUINT64 UNIC_SCN_UINT64 "x"
#define UNIC_SCNXUINT64 UNIC_SCN_UINT64 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint64_t_defined
#  define __uint64_t_defined
typedef unic_uint64_t uint64_t;
# endif

#ifndef UINT64_MAX
# define UINT64_MAX UNIC_UINT64_MAX
#endif

#ifndef SIZEOF_UINT64
# define SIZEOF_UINT64 UNIC_SIZEOF_UINT64
#endif

#ifndef UINT64_WIDTH
# define UINT64_WIDTH UNIC_UINT64_WIDTH
#endif

#ifndef UINT64_TYPE
# define UINT64_TYPE UNIC_UINT64_TYPE
#endif

#ifndef UINT64_C
# define UINT64_C UNIC_UINT64_C
#endif

#ifndef PRIxUINT64
# define PRIiUINT64 UNIC_PRIiUINT64
# define PRIoUINT64 UNIC_PRIoUINT64
# define PRIuUINT64 UNIC_PRIuUINT64
# define PRIxUINT64 UNIC_PRIxUINT64
# define PRIXUINT64 UNIC_PRIXUINT64
#endif

#ifndef SCNxUINT64
# define SCNiUINT64 UNIC_SCNiUINT64
# define SCNoUINT64 UNIC_SCNoUINT64
# define SCNuUINT64 UNIC_SCNuUINT64
# define SCNxUINT64 UNIC_SCNxUINT64
# define SCNXUINT64 UNIC_SCNXUINT64
#endif

#endif /* UNIC_FALLBACK */

#endif
