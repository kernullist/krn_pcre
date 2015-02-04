#pragma once

#pragma warning (disable : 4127)
#pragma warning (disable : 4242)
#pragma warning (disable : 4244)
#pragma warning (disable : 4701)

#ifndef _WIN2K_COMPAT_SLIST_USAGE
#define _WIN2K_COMPAT_SLIST_USAGE	1
#endif

#ifndef NTSTRSAFE_LIB
#define NTSTRSAFE_LIB
#endif

#define PCRE_STATIC

#include <ntddk.h>
#include <wdm.h>
#include <ntstrsafe.h>
#include "pcre.h"

#ifndef _FN_
#define _FN_	__FUNCTION__
#endif

#ifndef _LN_
#define _LN_	__LINE__
#endif

