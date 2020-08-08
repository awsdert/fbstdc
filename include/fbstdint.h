#ifndef FBSTDINT_H
#define FBSTDINT_H

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

#ifndef __size_t_defined
#define __size_t_defined
#undef SIZE_MAX
#undef SIZE_T_C
#undef SIZE_T_WIDTH
#undef SIZEOF_SIZE_T
#undef SIZE_END_BIT
#undef PRI_SIZE_T
#undef SCN_SIZE_T
typedef unsigned long size_t;
#define SIZE_MAX ULONG_MAX
#endif


#ifndef SIZEOF_SIZE_T
#define SIZEOF_SIZE_T SIZEOF(SIZE_MAX)
#endif

#ifndef SIZE_T_WIDTH
#define SIZE_T_WIDTH (SIZEOF_SIZE_T * CHAR_BIT)
#endif

#ifndef SIZE_END_BIT
#define SIZE_END_BIT ~(SIZE_MAX>>1)
#endif

#ifndef SIZE_T_C
#if SIZE_MAX > ULONG_MAX
#define SIZE_T_C(VAL) VAL##LLU
#else
#define SIZE_T_C(VAL) VAL##LU
#endif
#endif

#ifndef PRI_SIZE_T
#if SIZE_MAX > ULONG_MAX
#define PRI_SIZE_T "ll"
#else
#define PRI_SIZE_T "l"
#endif
#endif

#ifndef SCN_SIZE_T
#if SIZE_MAX > ULONG_MAX
#define SCN_SIZE_T "ll"
#else
#define SCN_SIZE_T "l"
#endif
#endif

#endif /* FBSTDINT_H */
