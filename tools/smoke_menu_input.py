#!/usr/bin/env python3
"""Drive the known title -> menu -> match smoke-test path through X11."""

import ctypes
import time

x11 = ctypes.CDLL("libX11.so.6")
xtst = ctypes.CDLL("libXtst.so.6")
x11.XOpenDisplay.restype = ctypes.c_void_p
x11.XStringToKeysym.argtypes = [ctypes.c_char_p]
x11.XStringToKeysym.restype = ctypes.c_ulong
x11.XKeysymToKeycode.argtypes = [ctypes.c_void_p, ctypes.c_ulong]
x11.XKeysymToKeycode.restype = ctypes.c_uint
xtst.XTestFakeKeyEvent.argtypes = [
    ctypes.c_void_p, ctypes.c_uint, ctypes.c_int, ctypes.c_ulong
]

display = x11.XOpenDisplay(None)
if not display:
    raise SystemExit("no se pudo abrir DISPLAY (la prueba requiere una sesión X11/XWayland)")


def tap(name: str, hold: float = 0.12) -> None:
    key = x11.XKeysymToKeycode(display, x11.XStringToKeysym(name.encode()))
    xtst.XTestFakeKeyEvent(display, key, 1, 0)
    x11.XFlush(display)
    time.sleep(hold)
    xtst.XTestFakeKeyEvent(display, key, 0, 0)
    x11.XFlush(display)


# Timings intentionally include enough room for shader compilation on the
# first run. The path enters the main menu and continues into match setup.
for delay, key in [
    (5, "Return"),
    (2, "x"),
    (2, "Return"),
    (3, "x"),
    (3, "Down"),
    (1, "x"),
    (3, "x"),
    (3, "Return"),
]:
    time.sleep(delay)
    tap(key)

