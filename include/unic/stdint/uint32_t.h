#if !defined( UNIC_UINT32_C ) && UNIC_CAN_MAP__EXACTLY_32BIT
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT32_MAX
# define UNIC_UINT32_MAX UINT32_MAX
#elif UNIC_INT_WIDTH == 32
# define UNIC_UINT32_MAX UNIC_UINT_MAX
#else
# define UNIC_UINT32_MAX UNIC_ULONG_MAX
#endif

#ifdef UINT32_END_BIT
# define UNIC_UINT32_END_BIT UINT32_END_BIT
#else
# define UNIC_UINT32_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT32
# define UNIC_SIZEOF_UINT32 SIZEOF_UINT32
#else
# define UNIC_SIZEOF_UINT32 SIZEOF_BY_UMAX(UNIC_UINT32_MAX)
#endif

#ifdef UINT32_WIDTH
# define UNIC_UINT32_WIDTH UINT32_WIDTH
#else
# define UNIC_UINT32_WIDTH (UNIC_SIZEOF_UINT32 * UNIC_CHAR_BIT)
#endif

#ifdef UINT32_TYPE
# define UNIC_UINT32_TYPE UINT32_TYPE
#elif UNIC_INT_WIDTH == 32
# define UNIC_UINT32_TYPE unsigned int
#else
# define UNIC_UINT32_TYPE unsigned long int
#endif

typedef UNIC_UINT32_TYPE unic_uint32_t;

#ifdef UINT32_C
# define UNIC_UINT32_C UINT32_C
#elif UNIC_INT_WIDTH == 32
# define UNIC_UINT32_C(VAL) VAL
#else
# define UNIC_UINT32_C(VAL) VAL##UL
#endif

#ifdef PRI_UINT32
# define UNIC_PRI_UINT32 PRI_UINT32
#elif UNIC_INT_WIDTH == 32
# define UNIC_PRI_UINT32
#else
# define UNIC_PRI_UINT32 "l"
#endif

#ifdef SCN_UINT32
# define UNIC_SCN_UINT32 SCN_UINT32
#elif UNIC_INT_WIDTH == 32
# define UNIC_SCN_UINT32
#else
# define UNIC_SCN_UINT32 "l"
#endif

#define UNIC_PRIiUINT32 UNIC_PRI_UINT32 "i"
#define UNIC_PRIoUINT32 UNIC_PRI_UINT32 "o"
#define UNIC_PRIuUINT32 UNIC_PRI_UINT32 "u"
#define UNIC_PRIxUINT32 UNIC_PRI_UINT32 "x"
#define UNIC_PRIXUINT32 UNIC_PRI_UINT32 "X"

#define UNIC_SCNiUINT32 UNIC_SCN_UINT32 "i"
#define UNIC_SCNoUINT32 UNIC_SCN_UINT32 "o"
#define UNIC_SCNuUINT32 UNIC_SCN_UINT32 "u"
#define UNIC_SCNxUINT32 UNIC_SCN_UINT32 "x"
#define UNIC_SCNXUINT32 UNIC_SCN_UINT32 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint32_t_defined
#  define __uint32_t_defined
typedef unic_uint32_t uint32_t;
# endif

#ifndef UINT32_MAX
# define UINT32_MAX UNIC_UINT32_MAX
#endif

#ifndef SIZEOF_UINT32
# define SIZEOF_UINT32 UNIC_SIZEOF_UINT32
#endif

#ifndef UINT32_WIDTH
# define UINT32_WIDTH UNIC_UINT32_WIDTH
#endif

#ifndef UINT32_TYPE
# define UINT32_TYPE UNIC_UINT32_TYPE
#endif

#ifndef UINT32_C
# define UINT32_C UNIC_UINT32_C
#endif

#ifndef PRIxUINT32
# define PRIiUINT32 UNIC_PRIiUINT32
# define PRIoUINT32 UNIC_PRIoUINT32
# define PRIuUINT32 UNIC_PRIuUINT32
# define PRIxUINT32 UNIC_PRIxUINT32
# define PRIXUINT32 UNIC_PRIXUINT32
#endif

#ifndef SCNxUINT32
# define SCNiUINT32 UNIC_SCNiUINT32
# define SCNoUINT32 UNIC_SCNoUINT32
# define SCNuUINT32 UNIC_SCNuUINT32
# define SCNxUINT32 UNIC_SCNxUINT32
# define SCNXUINT32 UNIC_SCNXUINT32
#endif

#endif /* UNIC_FALLBACK */

#endif
