#pragma once

#include <wdm.h>

int __fastcall kn_isctype(int c, int ctypeFlags);

int __fastcall kn_iswctype(int c, int ctypeFlags);

int __fastcall kn_isleadbyte(int c);

int __fastcall kn_isalpha(int c);

int __fastcall kn_isalnum(int c);

int __fastcall kn_iswalnum(wint_t c);

int __fastcall kn_isascii(int c);

int __fastcall kn_iswascii(wint_t c);

int __fastcall kn_iscntrl(int c);

int __fastcall kn_iscsym(int c);

int __fastcall kn_iscsymf(int c);

int __fastcall kn_isdigit(int c);

int __fastcall kn_isgraph(int c);

int __fastcall kn_islower(int c);

int __fastcall kn_isprint(int c);

int __fastcall kn_ispunct(int c);

int __fastcall kn_isspace(int c);

int __fastcall kn_isupper(int c);

int __fastcall kn_isxdigit(int c);

int __fastcall kn_iswalpha(wint_t c);

int __fastcall kn_iswcntrl(wint_t c);

int __fastcall kn_iswdigit(wint_t c);

int __fastcall kn_iswgraph(wint_t c);

int __fastcall kn_iswprint(wint_t c);

int __fastcall kn_iswpunct(wint_t c);

int __fastcall kn_iswlower(wint_t c);

int __fastcall kn_iswupper(wint_t c);

int __fastcall kn_iswspace(wint_t c);

int __fastcall kn_iswxdigit(wint_t c);
