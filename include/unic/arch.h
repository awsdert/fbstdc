#ifndef INC_UNIC_ARCH_H
#define INC_UNIC_ARCH_H

#if defined( __GNUC__ )
# define UNIC_CC_GNU
# ifdef __clang__
#  define UNIC_CC_CLANG
# endif
# ifdef __MINGW64__
#  define UNIC_CC_MGW64
# endif
# ifdef __MINGW32__
#  define UNIC_CC_MGW64
# endif
#elif defined( _MSC_VER )
# define UNIC_CC_MSC
#else
# define UNIC_CC_OTHER
#endif

#if defined(__aarch64__)
# define UNIC_ARCH_ARM64
#elif defined(__arm__) || defined(__thumb__) || defined(_ARM) \
	|| defined(_M_ARM) || defined(_M_ARMT) || defined(__arm)
# define UNIC_ARCH_ARM
#elif defined(__amd64__) || defined(__amd64) \
	|| defined(__x86_64__) || defined(__x86_64) || defined(_M_AMD64)
# define UNIC_ARCH_AMD64
#elif defined(__ia64__) || defined(__ia64__) \
	|| defined(__IA64__) || defined(_M_IA64) || defined(__itanium__)
# define UNIC_ARCH_IA64
#elif defined(__x86__) || defined(__x86) || defined(_M_IX86)
# define UNIC_ARCH_X86
#else
# ifdef UNIC_CC_OTHER
/* Assuming Primeval C Compiler which started with PDP */
#  define UNIC_ARCH_PDP
# else
#  define UNIC_ARCH_X16
# endif
#endif

#if defined( UNIC_ARCH_ARM64 ) || defined( UNIC_ARCH_AMD64 ) \
	|| defined( UNIC_ARCH_IA64 )
# define UNIC_ARCH_CHAR_WIDTH 8
# define UNIC_ARCH_WORD_WIDTH 64
#elif defined( UNIC_ARCH_X86 )
# define UNIC_ARCH_CHAR_WIDTH 8
# define UNIC_ARCH_WORD_WIDTH 32
#elif ~0 << 15
# define UNIC_ARCH_CHAR_WIDTH 8
# define UNIC_ARCH_WORD_WIDTH 16
#elif ~0 << 7
# define UNIC_ARCH_CHAR_WIDTH 8
# define UNIC_ARCH_WORD_WIDTH 8
#elif ~0 << 6
# define UNIC_ARCH_CHAR_WIDTH 7
# define UNIC_ARCH_WORD_WIDTH 7
#elif ~0 << 5
# define UNIC_ARCH_CHAR_WIDTH 6
# define UNIC_ARCH_WORD_WIDTH 6
#else
# define UNIC_ARCH_CHAR_WIDTH 4
# define UNIC_ARCH_WORD_WIDTH 4
#endif

#endif /* INC_UNIC_ARCH_H */
