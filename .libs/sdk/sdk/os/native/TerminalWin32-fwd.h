/* os/native/TerminalWin32 header-forward file, generated with rock, the ooc compiler written in ooc */

#pragma once
#ifndef ___os_native_TerminalWin32_fwd___
#define ___os_native_TerminalWin32_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_TerminalWin32__TerminalWin32;
typedef struct _os_native_TerminalWin32__TerminalWin32 os_native_TerminalWin32__TerminalWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_TerminalWin32__TerminalWin32Class;
typedef struct _os_native_TerminalWin32__TerminalWin32Class os_native_TerminalWin32__TerminalWin32Class;
#endif

#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/os/Terminal-fwd.h>
#include <sdk/native/win32/types-fwd.h>
#if defined(__WIN32__) || defined(__WIN64__)
os_native_TerminalWin32__TerminalWin32Class *os_native_TerminalWin32__TerminalWin32_class();
os_native_TerminalWin32__TerminalWin32* os_native_TerminalWin32__TerminalWin32_new();
void os_native_TerminalWin32__TerminalWin32_init(os_native_TerminalWin32__TerminalWin32* this);
lang_Numbers__Int os_native_TerminalWin32__TerminalWin32__lookupColor(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color c);
lang_Numbers__Int os_native_TerminalWin32__TerminalWin32__lookupColor_impl(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color c);
void os_native_TerminalWin32__TerminalWin32_setColor(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color fg, os_Terminal__Color bg);
void os_native_TerminalWin32__TerminalWin32_setColor_impl(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color fg, os_Terminal__Color bg);
void os_native_TerminalWin32__TerminalWin32_setFgColor(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color c);
void os_native_TerminalWin32__TerminalWin32_setFgColor_impl(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color c);
void os_native_TerminalWin32__TerminalWin32_setBgColor(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color c);
void os_native_TerminalWin32__TerminalWin32_setBgColor_impl(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Color c);
void os_native_TerminalWin32__TerminalWin32_setAttr(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Attr attribute);
void os_native_TerminalWin32__TerminalWin32_setAttr_impl(os_native_TerminalWin32__TerminalWin32* this, os_Terminal__Attr attribute);
void os_native_TerminalWin32__TerminalWin32_reset(os_native_TerminalWin32__TerminalWin32* this);
void os_native_TerminalWin32__TerminalWin32_reset_impl(os_native_TerminalWin32__TerminalWin32* this);
void os_native_TerminalWin32__TerminalWin32___defaults__(os_native_TerminalWin32__TerminalWin32* this);
void os_native_TerminalWin32__TerminalWin32___defaults___impl(os_native_TerminalWin32__TerminalWin32* this);
void os_native_TerminalWin32__TerminalWin32___load__();
#endif
void os_native_TerminalWin32_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_TerminalWin32__GetStdHandle GetStdHandle

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_TerminalWin32__SetConsoleTextAttribute SetConsoleTextAttribute

#endif

#endif // ___os_native_TerminalWin32_fwd___
