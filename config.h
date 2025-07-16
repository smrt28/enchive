#ifndef CONFIG_H
#define CONFIG_H

/* Compile-time configuration */

#ifndef ENCHIVE_VERSION
#  define ENCHIVE_VERSION 10
#endif

#ifndef ENCHIVE_FORMAT_VERSION
#  define ENCHIVE_FORMAT_VERSION 10
#endif

#ifndef ENCHIVE_FILE_EXTENSION
#  define ENCHIVE_FILE_EXTENSION .enchive2
#endif

#ifndef ENCHIVE_KEY_DERIVE_ITERATIONS
#  define ENCHIVE_KEY_DERIVE_ITERATIONS 25  /* 32MB */
#endif

#ifndef ENCHIVE_SECKEY_DERIVE_ITERATIONS
#  define ENCHIVE_SECKEY_DERIVE_ITERATIONS 29 /* 512MB */
#endif

#ifndef ENCHIVE_OPTION_AGENT
#  if defined(__unix__) || defined(__APPLE__) || defined(__HAIKU__)
#    define ENCHIVE_OPTION_AGENT 1
#  else
#    define ENCHIVE_OPTION_AGENT 0
#  endif
#endif

#ifndef ENCHIVE_AGENT_TIMEOUT
#  define ENCHIVE_AGENT_TIMEOUT 900 /* 15 minutes */
#endif

#ifndef ENCHIVE_AGENT_DEFAULT_ENABLED
#  define ENCHIVE_AGENT_DEFAULT_ENABLED 0
#endif

#ifndef ENCHIVE_PINENTRY_DEFAULT
#  define ENCHIVE_PINENTRY_DEFAULT pinentry
#endif

#ifndef ENCHIVE_PINENTRY_DEFAULT_ENABLED
#  define ENCHIVE_PINENTRY_DEFAULT_ENABLED 0
#endif

#ifndef ENCHIVE_PASSPHRASE_MAX
#  define ENCHIVE_PASSPHRASE_MAX 1024
#endif

/* Required for correct builds */

#ifndef _POSIX_C_SOURCE
#  define _POSIX_C_SOURCE 1
#endif

#define OPTPARSE_IMPLEMENTATION

#define STR(a) XSTR(a)
#define XSTR(a) #a

/* Integer definitions needed by crypto */

#include <stdint.h>
/* If your compiler lacks a stdint.h, such as when compiling with a
 * plain ANSI C compiler, you'll need to replace this include with the
 * appropriate typedefs for the following types:
 *
 *   uint8_t
 *   uint32_t
 *   uint64_t
 *   int32_t
 *   int64_t
 *
 * You will also need to define these macros:
 *
 *   UINT8_C
 *   UINT32_C
 */

#endif /* CONFIG_H */
