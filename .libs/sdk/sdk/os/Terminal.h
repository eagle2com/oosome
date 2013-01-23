/* os/Terminal header file, generated with rock, the ooc compiler written in ooc */

#pragma once
#ifndef ___os_Terminal___
#define ___os_Terminal___

#include <sdk/os/Terminal-fwd.h>
#include <sdk/lang/types.h>

struct _os_Terminal__Terminal {
    struct _lang_types__Object __super__;
};


struct _os_Terminal__TerminalHandler {
    struct _lang_types__Object __super__;
};


struct _os_Terminal__TerminalDummy {
    struct _os_Terminal__TerminalHandler __super__;
};


struct _os_Terminal__TerminalClass {
    struct _lang_types__ClassClass __super__;
    os_Terminal__TerminalHandler* handler;
    os_Terminal__Terminal* (*new)();
    void (*init)(os_Terminal__Terminal*);
    void (*setColor)(os_Terminal__Color, os_Terminal__Color);
    void (*setFgColor)(os_Terminal__Color);
    void (*setBgColor)(os_Terminal__Color);
    void (*setAttr)(os_Terminal__Attr);
    void (*reset)();
    os_Terminal__TerminalHandler* (*_getHandler)();
};


struct _os_Terminal__TerminalHandlerClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(os_Terminal__TerminalHandler*);
    os_Terminal__TerminalHandler* (*new)();
    void (*setColor)(os_Terminal__TerminalHandler*, os_Terminal__Color, os_Terminal__Color);
    void (*setFgColor)(os_Terminal__TerminalHandler*, os_Terminal__Color);
    void (*setBgColor)(os_Terminal__TerminalHandler*, os_Terminal__Color);
    void (*setAttr)(os_Terminal__TerminalHandler*, os_Terminal__Attr);
    void (*reset)(os_Terminal__TerminalHandler*);
};


struct _os_Terminal__TerminalDummyClass {
    struct _os_Terminal__TerminalHandlerClass __super__;
};


struct _os_Terminal__AttrClass {
    struct _lang_types__ClassClass __super__;
    os_Terminal__Attr reset;
    os_Terminal__Attr bright;
    os_Terminal__Attr dim;
    os_Terminal__Attr under;
    os_Terminal__Attr blink;
    os_Terminal__Attr reverse;
    os_Terminal__Attr hidden;
};


struct _os_Terminal__ColorClass {
    struct _lang_types__ClassClass __super__;
    os_Terminal__Color black;
    os_Terminal__Color red;
    os_Terminal__Color green;
    os_Terminal__Color yellow;
    os_Terminal__Color blue;
    os_Terminal__Color magenta;
    os_Terminal__Color cyan;
    os_Terminal__Color grey;
    os_Terminal__Color white;
    os_Terminal__Color (*fromHash)(lang_Numbers__Int);
};


#ifdef OOC_FROM_C
#define Terminal os_Terminal__Terminal
#define Terminal_class() os_Terminal__Terminal_class()
#define TerminalClass os_Terminal__TerminalClass
#define TerminalClass_class() os_Terminal__TerminalClass_class()
#define Terminal_new() (void*) os_Terminal__Terminal_new()
#define Terminal_init(_this_) os_Terminal__Terminal_init((void*) (_this_))
#define Terminal_setColor(f, b) os_Terminal__Terminal_setColor((f), (b))
#define Terminal_setFgColor(c) os_Terminal__Terminal_setFgColor((c))
#define Terminal_setBgColor(c) os_Terminal__Terminal_setBgColor((c))
#define Terminal_setAttr(attribute) os_Terminal__Terminal_setAttr((attribute))
#define Terminal_reset() os_Terminal__Terminal_reset()
#define Terminal__getHandler() (void*) os_Terminal__Terminal__getHandler()
#define Terminal___defaults__(_this_) os_Terminal__Terminal___defaults__((void*) (_this_))
#define Terminal___load__() os_Terminal__Terminal___load__()
#define TerminalHandler os_Terminal__TerminalHandler
#define TerminalHandler_class() os_Terminal__TerminalHandler_class()
#define TerminalHandlerClass os_Terminal__TerminalHandlerClass
#define TerminalHandlerClass_class() os_Terminal__TerminalHandlerClass_class()
#define TerminalHandler_init(_this_) os_Terminal__TerminalHandler_init((void*) (_this_))
#define TerminalHandler_new() (void*) os_Terminal__TerminalHandler_new()
#define TerminalHandler_setColor(_this_, f, b) os_Terminal__TerminalHandler_setColor((void*) (_this_), (f), (b))
#define TerminalHandler_setFgColor(_this_, c) os_Terminal__TerminalHandler_setFgColor((void*) (_this_), (c))
#define TerminalHandler_setBgColor(_this_, c) os_Terminal__TerminalHandler_setBgColor((void*) (_this_), (c))
#define TerminalHandler_setAttr(_this_, attribute) os_Terminal__TerminalHandler_setAttr((void*) (_this_), (attribute))
#define TerminalHandler_reset(_this_) os_Terminal__TerminalHandler_reset((void*) (_this_))
#define TerminalHandler___defaults__(_this_) os_Terminal__TerminalHandler___defaults__((void*) (_this_))
#define TerminalHandler___load__() os_Terminal__TerminalHandler___load__()
#define TerminalDummy os_Terminal__TerminalDummy
#define TerminalDummy_class() os_Terminal__TerminalDummy_class()
#define TerminalDummyClass os_Terminal__TerminalDummyClass
#define TerminalDummyClass_class() os_Terminal__TerminalDummyClass_class()
#define TerminalDummy_setColor(_this_, f, b) os_Terminal__TerminalDummy_setColor((void*) (_this_), (f), (b))
#define TerminalDummy_setFgColor(_this_, c) os_Terminal__TerminalDummy_setFgColor((void*) (_this_), (c))
#define TerminalDummy_setBgColor(_this_, c) os_Terminal__TerminalDummy_setBgColor((void*) (_this_), (c))
#define TerminalDummy_setAttr(_this_, attribute) os_Terminal__TerminalDummy_setAttr((void*) (_this_), (attribute))
#define TerminalDummy_reset(_this_) os_Terminal__TerminalDummy_reset((void*) (_this_))
#define TerminalDummy___defaults__(_this_) os_Terminal__TerminalDummy___defaults__((void*) (_this_))
#define TerminalDummy___load__() os_Terminal__TerminalDummy___load__()
#define TerminalDummy_new() (void*) os_Terminal__TerminalDummy_new()
#define TerminalDummy_init(_this_) os_Terminal__TerminalDummy_init((void*) (_this_))
#define Attr os_Terminal__Attr
#define Attr_class() os_Terminal__Attr_class()
#define AttrClass os_Terminal__AttrClass
#define AttrClass_class() os_Terminal__AttrClass_class()
#define Color os_Terminal__Color
#define Color_class() os_Terminal__Color_class()
#define ColorClass os_Terminal__ColorClass
#define ColorClass_class() os_Terminal__ColorClass_class()
#define Color_fromHash(hash) os_Terminal__Color_fromHash((hash))
#endif

#endif // ___os_Terminal___
