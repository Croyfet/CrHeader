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


#ifndef _INCLUDE_GUARD_CRHEADER_TYPE_HPP_
#define _INCLUDE_GUARD_CRHEADER_TYPE_HPP_

#include <CrHeader_type.h>

#ifdef __cplusplus

#include <cstdint>
#include <type_traits>

namespace cc
{
	using INT = int32_t;
	using UINT = uint32_t;
	using BOOL = int32_t;
	using LONG = long;

	using BYTE = uint8_t;
	using WORD = uint16_t;
	using DWORD = uint32_t;
	using QWORD = uint64_t;

	using FLOAT = float;

	using LPSTR = char*;
	using LPWSTR = wchar_t*;

	using LPCSTR = const char*;
	using LPCWSTR = const wchar_t*;

	inline constexpr cc::DWORD H1DWORD(cc::DWORD dw) { return (dw >> 16); }
	inline constexpr cc::DWORD H2DWORD(cc::DWORD dw) { return (dw & 0xffff); }
	inline constexpr cc::QWORD H1QWORD(cc::QWORD qw) { return (qw >> 32); }
	inline constexpr cc::QWORD H2QWORD(cc::QWORD qw) { return (qw & 0xffff); }
	inline constexpr cc::QWORD Q1QWORD(cc::QWORD qw) { return (qw >> 48); }
	inline constexpr cc::QWORD Q2QWORD(cc::QWORD qw) { return ((qw >> 32) & 0xffff); }
	inline constexpr cc::QWORD Q3QWORD(cc::QWORD qw) { return ((qw >> 16) & 0xffff); }
	inline constexpr cc::QWORD Q4QWORD(cc::QWORD qw) { return (qw & 0xffff); }

#ifndef CC_ENABLE_BITWISE_OPERATION
#define CC_ENABLE_BITWISE_OPERATION(TYPE_ENUM_CLASS)\
	inline constexpr TYPE_ENUM_CLASS operator | (TYPE_ENUM_CLASS const left, TYPE_ENUM_CLASS const right)\
	{ return static_cast<TYPE_ENUM_CLASS>(static_cast<std::underlying_type<TYPE_ENUM_CLASS>::type>(left) | static_cast<std::underlying_type<TYPE_ENUM_CLASS>::type>(right)); }\
	inline constexpr TYPE_ENUM_CLASS operator |= (TYPE_ENUM_CLASS& left, TYPE_ENUM_CLASS const right)\
	{ return left = (left | right); }\
	inline constexpr TYPE_ENUM_CLASS operator & (TYPE_ENUM_CLASS const left, TYPE_ENUM_CLASS const right)\
	{ return static_cast<TYPE_ENUM_CLASS>(static_cast<std::underlying_type<TYPE_ENUM_CLASS>::type>(left) & static_cast<std::underlying_type<TYPE_ENUM_CLASS>::type>(right)); }\
	inline constexpr TYPE_ENUM_CLASS operator &= (TYPE_ENUM_CLASS& left, TYPE_ENUM_CLASS const right)\
	{ return left = (left & right); }\
	inline constexpr bool operator== (TYPE_ENUM_CLASS const left, TYPE_ENUM_CLASS const right)\
	{ return static_cast<bool>(static_cast<std::underlying_type<TYPE_ENUM_CLASS>::type>(left) == static_cast<std::underlying_type<TYPE_ENUM_CLASS>::type>(right)); }\
	inline constexpr bool operator!= (TYPE_ENUM_CLASS const left, TYPE_ENUM_CLASS const right)\
	{ return static_cast<bool>(!(left == right)); }
#endif



}

#endif

#endif
