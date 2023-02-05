//
// Copyright (c) 2022 Croyfet
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//


#ifndef _INCLUDE_GUARD_CRHEADER_TYPE_H_
#define _INCLUDE_GUARD_CRHEADER_TYPE_H_

#ifdef __cplusplus
#include <cstdint>
#include <cwchar>
#else
#include <stdint.h>
#include <wchar.h>
#endif

#ifdef __cplusplus
namespace cc
{
#endif

#ifndef CC_DECLARE_HANDLE
#define CC_DECLARE_HANDLE(CC_HANDLE_NAME)\
struct __CC_HANDLE_##CC_HANDLE_NAME{ int64_t unused; };\
typedef struct __CC_HANDLE_##CC_HANDLE_NAME* CC_HANDLE_NAME;
#endif

#ifndef __cplusplus
	typedef int32_t         CC_INT;
	typedef uint32_t        CC_UINT;
	typedef int32_t         CC_BOOL;
	typedef long            CC_LONG;

	typedef uint8_t         CC_BYTE;
	typedef uint16_t        CC_WORD;
	typedef uint32_t        CC_DWORD;
	typedef uint64_t        CC_QWORD;

	typedef float           CC_FLOAT;

	typedef char*           CC_LPSTR;
	typedef wchar_t*        CC_LPWSTR;

	typedef const char*     CC_LPCSTR;
	typedef const wchar_t*  CC_LPCWSTR;
#endif

#define CC_H1DWORD(dw) (dw >> 16)
#define CC_H2DWORD(dw) (dw & 0xffff)
#define CC_H1QWORD(qw) (qw >> 32)
#define CC_H2QWORD(qw) (qw & 0xffffffffllu)
#define CC_Q1QWORD(qw) (qw >> 48)
#define CC_Q2QWORD(qw) ((qw >> 32) & 0xffff)
#define CC_Q3QWORD(qw) ((qw >> 16) & 0xffff)
#define CC_Q4QWORD(qw) (qw & 0xffff)


#ifdef __cplusplus
}
#endif

#endif
