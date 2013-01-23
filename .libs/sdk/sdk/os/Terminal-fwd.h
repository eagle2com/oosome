/* os/Terminal header-forward file, generated with rock, the ooc compiler written in ooc */

#pragma once
#ifndef ___os_Terminal_fwd___
#define ___os_Terminal_fwd___

struct _os_Terminal__Terminal;
typedef struct _os_Terminal__Terminal os_Terminal__Terminal;
struct _os_Terminal__TerminalHandler;
typedef struct _os_Terminal__TerminalHandler os_Terminal__TerminalHandler;
struct _os_Terminal__TerminalDummy;
typedef struct _os_Terminal__TerminalDummy os_Terminal__TerminalDummy;
typedef int os_Terminal__Attr;
typedef int os_Terminal__Color;
struct _os_Terminal__TerminalClass;
typedef struct _os_Terminal__TerminalClass os_Terminal__TerminalClass;
struct _os_Terminal__TerminalHandlerClass;
typedef struct _os_Terminal__TerminalHandlerClass os_Terminal__TerminalHandlerClass;
struct _os_Terminal__TerminalDummyClass;
typedef struct _os_Terminal__TerminalDummyClass os_Terminal__TerminalDummyClass;
struct _os_Terminal__AttrClass;
typedef struct _os_Terminal__AttrClass os_Terminal__AttrClass;
struct _os_Terminal__ColorClass;
typedef struct _os_Terminal__ColorClass os_Terminal__ColorClass;

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
#include <sdk/os/native/TerminalUnix-fwd.h>
#include <sdk/os/native/TerminalWin32-fwd.h>
os_Terminal__TerminalClass *os_Terminal__Terminal_class();
os_Terminal__Terminal* os_Terminal__Terminal_new();
void os_Terminal__Terminal_init(os_Terminal__Terminal* this);
void os_Terminal__Terminal_setColor(os_Terminal__Color f, os_Terminal__Color b);
void os_Terminal__Terminal_setFgColor(os_Terminal__Color c);
void os_Terminal__Terminal_setBgColor(os_Terminal__Color c);
void os_Terminal__Terminal_setAttr(os_Terminal__Attr attribute);
void os_Terminal__Terminal_reset();
os_Terminal__TerminalHandler* os_Terminal__Terminal__getHandler();
void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this);
void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this);
void os_Terminal__Terminal___load__();
os_Terminal__TerminalHandlerClass *os_Terminal__TerminalHandler_class();
void os_Terminal__TerminalHandler_init(os_Terminal__TerminalHandler* this);
os_Terminal__TerminalHandler* os_Terminal__TerminalHandler_new();
void os_Terminal__TerminalHandler_setColor(os_Terminal__TerminalHandler* this, os_Terminal__Color f, os_Terminal__Color b);
void os_Terminal__TerminalHandler_setFgColor(os_Terminal__TerminalHandler* this, os_Terminal__Color c);
void os_Terminal__TerminalHandler_setBgColor(os_Terminal__TerminalHandler* this, os_Terminal__Color c);
void os_Terminal__TerminalHandler_setAttr(os_Terminal__TerminalHandler* this, os_Terminal__Attr attribute);
void os_Terminal__TerminalHandler_reset(os_Terminal__TerminalHandler* this);
void os_Terminal__TerminalHandler___defaults__(os_Terminal__TerminalHandler* this);
void os_Terminal__TerminalHandler___defaults___impl(os_Terminal__TerminalHandler* this);
void os_Terminal__TerminalHandler___load__();
os_Terminal__TerminalDummyClass *os_Terminal__TerminalDummy_class();
void os_Terminal__TerminalDummy_setColor(os_Terminal__TerminalDummy* this, os_Terminal__Color f, os_Terminal__Color b);
void os_Terminal__TerminalDummy_setColor_impl(os_Terminal__TerminalDummy* this, os_Terminal__Color f, os_Terminal__Color b);
void os_Terminal__TerminalDummy_setFgColor(os_Terminal__TerminalDummy* this, os_Terminal__Color c);
void os_Terminal__TerminalDummy_setFgColor_impl(os_Terminal__TerminalDummy* this, os_Terminal__Color c);
void os_Terminal__TerminalDummy_setBgColor(os_Terminal__TerminalDummy* this, os_Terminal__Color c);
void os_Terminal__TerminalDummy_setBgColor_impl(os_Terminal__TerminalDummy* this, os_Terminal__Color c);
void os_Terminal__TerminalDummy_setAttr(os_Terminal__TerminalDummy* this, os_Terminal__Attr attribute);
void os_Terminal__TerminalDummy_setAttr_impl(os_Terminal__TerminalDummy* this, os_Terminal__Attr attribute);
void os_Terminal__TerminalDummy_reset(os_Terminal__TerminalDummy* this);
void os_Terminal__TerminalDummy_reset_impl(os_Terminal__TerminalDummy* this);
void os_Terminal__TerminalDummy___defaults__(os_Terminal__TerminalDummy* this);
void os_Terminal__TerminalDummy___defaults___impl(os_Terminal__TerminalDummy* this);
void os_Terminal__TerminalDummy___load__();
os_Terminal__TerminalDummy* os_Terminal__TerminalDummy_new();
void os_Terminal__TerminalDummy_init(os_Terminal__TerminalDummy* this);
os_Terminal__AttrClass *os_Terminal__Attr_class();
os_Terminal__ColorClass *os_Terminal__Color_class();
os_Terminal__Color os_Terminal__Color_fromHash(lang_Numbers__Int hash);
void os_Terminal_load();

#endif // ___os_Terminal_fwd___
