#if !defined( UNIC_UINT8_C ) && UNIC_CHAR_BIT == 8
#include "_.h"

/* Since these macros can function as fallbacks check for originals 1st */

#ifdef UINT8_MAX
# define UNIC_UINT8_MAX UINT8_MAX
#else
# define UNIC_UINT8_MAX UCHAR_MAX
#endif

#ifdef UINT8_END_BIT
# define UNIC_UINT8_END_BIT UINT8_END_BIT
#else
# define UNIC_UINT8_END_BIT (~(UNIC_UINT_MAX>>1))
#endif

#ifdef SIZEOF_UINT8
# define UNIC_SIZEOF_UINT8 SIZEOF_UINT8
#else
# define UNIC_SIZEOF_UINT8 UNIC_SIZEOF_CHAR
#endif

#ifdef UINT8_WIDTH
# define UNIC_UINT8_WIDTH UINT8_WIDTH
#else
# define UNIC_UINT8_WIDTH (UNIC_SIZEOF_UINT8 * UNIC_CHAR_BIT)
#endif

#ifdef UINT8_TYPE
# define UNIC_UINT8_TYPE UINT8_TYPE
#else
# define UNIC_UINT8_TYPE unsigned char
#endif

typedef UNIC_UINT8_TYPE unic_uint8_t;

#ifdef UINT8_C
# define UNIC_UINT8_C UINT8_C
#else
# define UNIC_UINT8_C(VAL) VAL
#endif

#ifdef PRI_UINT8
# define UNIC_PRI_UINT8 PRI_UINT8
#else
# define UNIC_PRI_UINT8
#endif

#ifdef SCN_UINT8
# define UNIC_SCN_UINT8 SCN_UINT8
#else
# define UNIC_SCN_UINT8 "hh"
#endif

#define UNIC_PRIiUINT8 UNIC_PRI_UINT8 "i"
#define UNIC_PRIoUINT8 UNIC_PRI_UINT8 "o"
#define UNIC_PRIuUINT8 UNIC_PRI_UINT8 "u"
#define UNIC_PRIxUINT8 UNIC_PRI_UINT8 "x"
#define UNIC_PRIXUINT8 UNIC_PRI_UINT8 "X"

#define UNIC_SCNiUINT8 UNIC_SCN_UINT8 "i"
#define UNIC_SCNoUINT8 UNIC_SCN_UINT8 "o"
#define UNIC_SCNuUINT8 UNIC_SCN_UINT8 "u"
#define UNIC_SCNxUINT8 UNIC_SCN_UINT8 "x"
#define UNIC_SCNXUINT8 UNIC_SCN_UINT8 "X"

#ifdef UNIC_FALLBACK

# ifndef __uint8_t_defined
#  define __uint8_t_defined
typedef unic_uint8_t uint8_t;
# endif

#ifndef UINT8_MAX
# define UINT8_MAX UNIC_UINT8_MAX
#endif

#ifndef SIZEOF_UINT8
# define SIZEOF_UINT8 UNIC_SIZEOF_UINT8
#endif

#ifndef UINT8_WIDTH
# define UINT8_WIDTH UNIC_UINT8_WIDTH
#endif

#ifndef UINT8_TYPE
# define UINT8_TYPE UNIC_UINT8_TYPE
#endif

#ifndef UINT8_C
# define UINT8_C UNIC_UINT8_C
#endif

#ifndef PRIxUINT8
# define PRIiUINT8 UNIC_PRIiUINT8
# define PRIoUINT8 UNIC_PRIoUINT8
# define PRIuUINT8 UNIC_PRIuUINT8
# define PRIxUINT8 UNIC_PRIxUINT8
# define PRIXUINT8 UNIC_PRIXUINT8
#endif

#ifndef SCNxUINT8
# define SCNiUINT8 UNIC_SCNiUINT8
# define SCNoUINT8 UNIC_SCNoUINT8
# define SCNuUINT8 UNIC_SCNuUINT8
# define SCNxUINT8 UNIC_SCNxUINT8
# define SCNXUINT8 UNIC_SCNXUINT8
#endif

#endif /* UNIC_FALLBACK */

#endif
