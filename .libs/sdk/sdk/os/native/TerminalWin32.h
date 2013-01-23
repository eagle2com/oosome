/* os/native/TerminalWin32 header file, generated with rock, the ooc compiler written in ooc */

#pragma once
#ifndef ___os_native_TerminalWin32___
#define ___os_native_TerminalWin32___

#include <sdk/os/native/TerminalWin32-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/os/Terminal.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_TerminalWin32__TerminalWin32 {
    struct _os_Terminal__TerminalHandler __super__;
    os_Terminal__Color bg;
    os_Terminal__Color fg;
    _lang_array__Array colors;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_TerminalWin32__TerminalWin32Class {
    struct _os_Terminal__TerminalHandlerClass __super__;
    lang_Numbers__Int (*_lookupColor)(os_native_TerminalWin32__TerminalWin32*, os_Terminal__Color);
};


#endif
#ifdef OOC_FROM_C
#define GetStdHandle(mode) os_native_TerminalWin32__GetStdHandle((mode))
#define SetConsoleTextAttribute(console, attr) os_native_TerminalWin32__SetConsoleTextAttribute((console), (attr))
#define TerminalWin32 os_native_TerminalWin32__TerminalWin32
#define TerminalWin32_class() os_native_TerminalWin32__TerminalWin32_class()
#define TerminalWin32Class os_native_TerminalWin32__TerminalWin32Class
#define TerminalWin32Class_class() os_native_TerminalWin32__TerminalWin32Class_class()
#define TerminalWin32_new() (void*) os_native_TerminalWin32__TerminalWin32_new()
#define TerminalWin32_init(_this_) os_native_TerminalWin32__TerminalWin32_init((void*) (_this_))
#define TerminalWin32__lookupColor(_this_, c) os_native_TerminalWin32__TerminalWin32__lookupColor((void*) (_this_), (c))
#define TerminalWin32_setColor(_this_, fg, bg) os_native_TerminalWin32__TerminalWin32_setColor((void*) (_this_), (fg), (bg))
#define TerminalWin32_setFgColor(_this_, c) os_native_TerminalWin32__TerminalWin32_setFgColor((void*) (_this_), (c))
#define TerminalWin32_setBgColor(_this_, c) os_native_TerminalWin32__TerminalWin32_setBgColor((void*) (_this_), (c))
#define TerminalWin32_setAttr(_this_, attribute) os_native_TerminalWin32__TerminalWin32_setAttr((void*) (_this_), (attribute))
#define TerminalWin32_reset(_this_) os_native_TerminalWin32__TerminalWin32_reset((void*) (_this_))
#define TerminalWin32___defaults__(_this_) os_native_TerminalWin32__TerminalWin32___defaults__((void*) (_this_))
#define TerminalWin32___load__() os_native_TerminalWin32__TerminalWin32___load__()
#endif

#endif // ___os_native_TerminalWin32___
