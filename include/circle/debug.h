//
// debug.h
//
// Circle - A C++ bare metal environment for Raspberry Pi
// Copyright (C) 2014-2016  R. Stange <rsta2@o2online.de>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef _circle_debug_h
#define _circle_debug_h

#include <circle/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NDEBUG

//#define DEBUG_CLICK

void debug_hexdump (const void *pStart, unsigned nBytes, const char *pSource = 0);

void debug_stacktrace (const u64 *pStackPtr, const char *pSource = 0);

#ifdef DEBUG_CLICK

void debug_click (void);

#endif

#endif

#ifdef __cplusplus
}
#endif

#endif
