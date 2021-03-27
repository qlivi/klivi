"""
GPL 3 license
Load clib, cpplib, and shared object file
"""

import os, sys, ctypes, pathlib

clib = ctypes.cdll.LoadLibrary("")
