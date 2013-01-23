/* os/native/TerminalUnix header-forward file, generated with rock, the ooc compiler written in ooc */

#pragma once
#ifndef ___os_native_TerminalUnix_fwd___
#define ___os_native_TerminalUnix_fwd___

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_TerminalUnix__TerminalUnix;
typedef struct _os_native_TerminalUnix__TerminalUnix os_native_TerminalUnix__TerminalUnix;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_TerminalUnix__TerminalUnixClass;
typedef struct _os_native_TerminalUnix__TerminalUnixClass os_native_TerminalUnix__TerminalUnixClass;
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
#include <sdk/os/unistd-fwd.h>
#include <sdk/os/FileDescriptor-fwd.h>
#if ((defined(__unix__)) || (defined(__APPLE__)))
os_native_TerminalUnix__TerminalUnixClass *os_native_TerminalUnix__TerminalUnix_class();
os_native_TerminalUnix__TerminalUnix* os_native_TerminalUnix__TerminalUnix_new();
void os_native_TerminalUnix__TerminalUnix_init(os_native_TerminalUnix__TerminalUnix* this);
lang_Numbers__Int os_native_TerminalUnix__TerminalUnix__lookupColor(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color c);
lang_Numbers__Int os_native_TerminalUnix__TerminalUnix__lookupColor_impl(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color c);
void os_native_TerminalUnix__TerminalUnix__output(os_native_TerminalUnix__TerminalUnix* this, lang_Numbers__Int code);
void os_native_TerminalUnix__TerminalUnix__output_impl(os_native_TerminalUnix__TerminalUnix* this, lang_Numbers__Int code);
void os_native_TerminalUnix__TerminalUnix_setColor(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color f, os_Terminal__Color b);
void os_native_TerminalUnix__TerminalUnix_setColor_impl(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color f, os_Terminal__Color b);
void os_native_TerminalUnix__TerminalUnix_setFgColor(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color color);
void os_native_TerminalUnix__TerminalUnix_setFgColor_impl(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color color);
void os_native_TerminalUnix__TerminalUnix_setBgColor(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color color);
void os_native_TerminalUnix__TerminalUnix_setBgColor_impl(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Color color);
void os_native_TerminalUnix__TerminalUnix_setAttr(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Attr attribute);
void os_native_TerminalUnix__TerminalUnix_setAttr_impl(os_native_TerminalUnix__TerminalUnix* this, os_Terminal__Attr attribute);
void os_native_TerminalUnix__TerminalUnix_reset(os_native_TerminalUnix__TerminalUnix* this);
void os_native_TerminalUnix__TerminalUnix_reset_impl(os_native_TerminalUnix__TerminalUnix* this);
void os_native_TerminalUnix__TerminalUnix___defaults__(os_native_TerminalUnix__TerminalUnix* this);
void os_native_TerminalUnix__TerminalUnix___defaults___impl(os_native_TerminalUnix__TerminalUnix* this);
void os_native_TerminalUnix__TerminalUnix___load__();
#endif
void os_native_TerminalUnix_load();

#endif // ___os_native_TerminalUnix_fwd___
