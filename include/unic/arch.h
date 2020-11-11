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

#if defined( __WIN64__ ) || defined( __WIN64 ) \
	|| defined( _WIN64_ ) || defined( _WIN64 ) || defined( WIN64 ) \
	|| defined( __win64__ ) || defined( __win64 ) \
	|| defined( _win64_ ) || defined( _win64 ) || defined( win64 )
#define UNIC__SYS_WIN64
#endif

#if defined( __WIN32__ ) || defined( __WIN32 ) \
	|| defined( _WIN32_ ) || defined( _WIN32 ) || defined( WIN32 ) \
	|| defined( __win32__ ) || defined( __win32 ) \
	|| defined( _win32_ ) || defined( _win32 ) || defined( win32 )
#define UNIC__SYS_WIN32
#endif

#if defined( __WIN16__ ) || defined( __WIN16 ) \
	|| defined( _WIN16_ ) || defined( _WIN16 ) || defined( WIN16 ) \
	|| defined( __win16__ ) || defined( __win16 ) \
	|| defined( _win16_ ) || defined( _win16 ) || defined( win16 )
#define UNIC__SYS_WIN16
#endif

#if defined( __UNIX__ ) || defined( __UNIX ) \
	|| defined( _UNIX_ ) || defined( _UNIX ) || defined( UNIX ) \
	|| defined( __unix__ ) || defined( __unix ) \
	|| defined( _unix_ ) || defined( _unix ) || defined( unix )
#define UNIC__SYS_UNIX
#endif

#if defined( __LINUX__ ) || defined( __LINUX ) \
	|| defined( _LINUX_ ) || defined( _LINUX ) || defined( LINUX ) \
	|| defined( __linux__ ) || defined( __linux ) \
	|| defined( _linux_ ) || defined( _linux ) || defined( linux )
#define UNIC__SYS_LINUX
#endif

#if defined( __POSIX__ ) || defined( __POSIX ) \
	|| defined( _POSIX_ ) || defined( _POSIX ) || defined( POSIX ) \
	|| defined( __posix__ ) || defined( __posix ) \
	|| defined( _posix_ ) || defined( _posix ) || defined( posix )
#define UNIC__SYS_POSIX
#endif

#ifdef UNIC__SYS_WIN64
#define UNIC_SYS_WIN64
#elif defined( UNIC__SYS_WIN16 )
#define UNIC_SYS_WIN16
#elif defined( UNIC__SYS_WIN32 )
#define UNIC_SYS_WIN32
#elif defined( UNIC__SYS_LINUX )
#define UNIC_SYS_LINUX
#elif defined( UNIC__SYS_UNIX )
#define UNIC_SYS_UNIX
#elif defined( UNIC__SYS_POSIX )
#define UNIC_SYS_POSIX
#else
#define UNIC_SYS_OTHER
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
