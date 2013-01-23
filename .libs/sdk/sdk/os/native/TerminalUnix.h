/* os/native/TerminalUnix header file, generated with rock, the ooc compiler written in ooc */

#pragma once
#ifndef ___os_native_TerminalUnix___
#define ___os_native_TerminalUnix___

#include <sdk/os/native/TerminalUnix-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/os/Terminal.h>

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_TerminalUnix__TerminalUnix {
    struct _os_Terminal__TerminalHandler __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_TerminalUnix__TerminalUnixClass {
    struct _os_Terminal__TerminalHandlerClass __super__;
    lang_Numbers__Int (*_lookupColor)(os_native_TerminalUnix__TerminalUnix*, os_Terminal__Color);
    void (*_output)(os_native_TerminalUnix__TerminalUnix*, lang_Numbers__Int);
};


#endif
#ifdef OOC_FROM_C
#define TerminalUnix os_native_TerminalUnix__TerminalUnix
#define TerminalUnix_class() os_native_TerminalUnix__TerminalUnix_class()
#define TerminalUnixClass os_native_TerminalUnix__TerminalUnixClass
#define TerminalUnixClass_class() os_native_TerminalUnix__TerminalUnixClass_class()
#define TerminalUnix_new() (void*) os_native_TerminalUnix__TerminalUnix_new()
#define TerminalUnix_init(_this_) os_native_TerminalUnix__TerminalUnix_init((void*) (_this_))
#define TerminalUnix__lookupColor(_this_, c) os_native_TerminalUnix__TerminalUnix__lookupColor((void*) (_this_), (c))
#define TerminalUnix__output(_this_, code) os_native_TerminalUnix__TerminalUnix__output((void*) (_this_), (code))
#define TerminalUnix_setColor(_this_, f, b) os_native_TerminalUnix__TerminalUnix_setColor((void*) (_this_), (f), (b))
#define TerminalUnix_setFgColor(_this_, color) os_native_TerminalUnix__TerminalUnix_setFgColor((void*) (_this_), (color))
#define TerminalUnix_setBgColor(_this_, color) os_native_TerminalUnix__TerminalUnix_setBgColor((void*) (_this_), (color))
#define TerminalUnix_setAttr(_this_, attribute) os_native_TerminalUnix__TerminalUnix_setAttr((void*) (_this_), (attribute))
#define TerminalUnix_reset(_this_) os_native_TerminalUnix__TerminalUnix_reset((void*) (_this_))
#define TerminalUnix___defaults__(_this_) os_native_TerminalUnix__TerminalUnix___defaults__((void*) (_this_))
#define TerminalUnix___load__() os_native_TerminalUnix__TerminalUnix___load__()
#endif

#endif // ___os_native_TerminalUnix___
