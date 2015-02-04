#pragma once

#include <ntddk.h>

BOOLEAN krn_pcre_match(PWSTR pPattern, PWSTR pString, SIZE_T length);