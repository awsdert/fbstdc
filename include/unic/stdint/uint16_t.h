#if !defined( UNIC_UINT16_C ) && UNIC_SHRT_WIDTH == 16
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT16_MAX
# define UNIC_UINT16_MAX UINT16_MAX
#else
# define UNIC_UINT16_MAX UCHAR_MAX
#endif

#ifdef UINT16_END_BIT
# define UNIC_UINT16_END_BIT UINT16_END_BIT
#else
# define UNIC_UINT16_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT16
# define UNIC_SIZEOF_UINT16 SIZEOF_UINT16
#else
# define UNIC_SIZEOF_UINT16 UNIC_SIZEOF_SHRT
#endif

#ifdef UINT16_WIDTH
# define UNIC_UINT16_WIDTH UINT16_WIDTH
#else
# define UNIC_UINT16_WIDTH (UNIC_SIZEOF_UINT16 * UNIC_CHAR_BIT)
#endif

#ifdef UINT16_TYPE
# define UNIC_UINT16_TYPE UINT16_TYPE
#else
# define UNIC_UINT16_TYPE unsigned short
#endif

typedef UNIC_UINT16_TYPE unic_uint16_t;

#ifdef UINT16_C
# define UNIC_UINT16_C UINT16_C
#else
# define UNIC_UINT16_C(VAL) VAL
#endif

#ifdef PRI_UINT16
# define UNIC_PRI_UINT16 PRI_UINT16
#else
# define UNIC_PRI_UINT16
#endif

#ifdef SCN_UINT16
# define UNIC_SCN_UINT16 SCN_UINT16
#else
# define UNIC_SCN_UINT16 "h"
#endif

#define UNIC_PRIiUINT16 UNIC_PRI_UINT16 "i"
#define UNIC_PRIoUINT16 UNIC_PRI_UINT16 "o"
#define UNIC_PRIuUINT16 UNIC_PRI_UINT16 "u"
#define UNIC_PRIxUINT16 UNIC_PRI_UINT16 "x"
#define UNIC_PRIXUINT16 UNIC_PRI_UINT16 "X"

#define UNIC_SCNiUINT16 UNIC_SCN_UINT16 "i"
#define UNIC_SCNoUINT16 UNIC_SCN_UINT16 "o"
#define UNIC_SCNuUINT16 UNIC_SCN_UINT16 "u"
#define UNIC_SCNxUINT16 UNIC_SCN_UINT16 "x"
#define UNIC_SCNXUINT16 UNIC_SCN_UINT16 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint16_t_defined
#  define __uint16_t_defined
typedef unic_uint16_t uint16_t;
# endif

#ifndef UINT16_MAX
# define UINT16_MAX UNIC_UINT16_MAX
#endif

#ifndef SIZEOF_UINT16
# define SIZEOF_UINT16 UNIC_SIZEOF_UINT16
#endif

#ifndef UINT16_WIDTH
# define UINT16_WIDTH UNIC_UINT16_WIDTH
#endif

#ifndef UINT16_TYPE
# define UINT16_TYPE UNIC_UINT16_TYPE
#endif

#ifndef UINT16_C
# define UINT16_C UNIC_UINT16_C
#endif

#ifndef PRIxUINT16
# define PRIiUINT16 UNIC_PRIiUINT16
# define PRIoUINT16 UNIC_PRIoUINT16
# define PRIuUINT16 UNIC_PRIuUINT16
# define PRIxUINT16 UNIC_PRIxUINT16
# define PRIXUINT16 UNIC_PRIXUINT16
#endif

#ifndef SCNxUINT16
# define SCNiUINT16 UNIC_SCNiUINT16
# define SCNoUINT16 UNIC_SCNoUINT16
# define SCNuUINT16 UNIC_SCNuUINT16
# define SCNxUINT16 UNIC_SCNxUINT16
# define SCNXUINT16 UNIC_SCNXUINT16
#endif

#endif /* UNIC_FALLBACK */

#endif
