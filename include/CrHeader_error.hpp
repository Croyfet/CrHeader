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


#ifndef _INCLUDE_GUARD_CRHEADER_ERROR_HPP_
#define _INCLUDE_GUARD_CRHEADER_ERROR_HPP_

#include <CrHeader_error.h>

#ifdef __cplusplus

#include <cstdint>

namespace cc
{

	enum class _tagCcResult : uint64_t;
	enum class _tag_CcResultFlag_Success : uint64_t;
	enum class _tag_CcResultFlag_ErrorPos : uint64_t;
	enum class _tag_CcResultFlag_Derived : uint64_t;
	enum class _tag_CcResultFlag_Reason : uint64_t;

	using CcResult = enum class _tagCcResult : uint64_t;
	using _CcResultFlag_Success = enum class _tag_CcResultFlag_Success : uint64_t;
	using _CcResultFlag_ErrorPos = enum class _tag_CcResultFlag_ErrorPos : uint64_t;
	using _CcResultFlag_Derived = enum class _tag_CcResultFlag_Derived : uint64_t;
	using _CcResultFlag_Reason = enum class _tag_CcResultFlag_Reason : uint64_t;

	enum class _tag_CcResultFlag_Success : uint64_t
	{
		SUCCESS = 0x0000000000000000 | 0x1000000000000000,
		FAILED =  0x8000000000000000 | 0x1000000000000000,
	};

	enum class _tag_CcResultFlag_ErrorPos : uint64_t
	{
		ARG =  0x0000000000000000 | 0x1000000000000000,
		MAIN = 0x4000000000000000 | 0x1000000000000000,
	};
	
	enum class _tag_CcResultFlag_Derived : uint64_t
	{
		CRBASE =       0x0000000000000000 | 0x1000000000000000,
		USER_DEFINED = 0x2000000000000000 | 0x1000000000000000,
	};

	enum class _tag_CcResultFlag_Reason : uint64_t
	{
		SUCCESS =                           0x0000000000000000,
		ZERO =                              SUCCESS,

		// Pointer
		FAILED_NULLPTR =                    0x0000000000010001,
		FAILED_NOT_NULLPTR =                0x0000000000010002,

		// Handle(Pointer)
		FAILED_HANDLE_ALREADY_INITIALIZED = 0x0000000000020001,
		FAILED_HANDLE_NOT_INITIALIZED =     0x0000000000020002,
		FAILED_HANDLE_NEW =                 0x0000000000020004,
		FAILED_HANDLE_INCOMPATIBLE =        0x0000000000020008,
		FAILED_HANDLE_BROKEN =              0x0000000000020010,

		// Value
		FAILED_TOO_BIG =                    0x0000000000040001,
		FAILED_TOO_SMALL =                  0x0000000000040002,

		FAILED_ONLY_GT =                    0x0000000000040010,
		FAILED_ONLY_LT =                    0x0000000000040020,
		FAILED_ONLY_GE =                    0x0000000000040040,
		FAILED_ONLY_LE =                    0x0000000000040080,

		FAILED_NOT_ZERO =                   0x0000000000040100,
		FAILED_ONLY_ZERO =                  0x0000000000040200,
		FAILED_RANGE_OUT =                  0x0000000000040400,

		FAILED_INVALID_ALLOC_SIZE =         0x0000000000080001,

		FAILED_INVALID_FLAG =               0x0000000000080010,
		FAILED_INVALID_MULTI_FLAG =         0x0000000000080020,
		FAILED_FLAG_NOT_MATCH =	            0x0000000000080040,

		// String
		FAILED_TEXT_NULL_TERMINALED =       0x0000000000100001,
		FAILED_TEXT_NOT_NULLTERMINALED =    0x0000000000100002,
		FAILED_TEXT_CONTAIN_NULL_CHAR =     0x0000000000100004,
		FAILED_TEXT_CONTAIN_CONTROL_CODE =  0x0000000000100008,
		FAILED_TEXT_CONTAIN_BREAK_CHAR =    0x0000000000100010,
		FAILED_TEXT_CONTAIN_INVALID_CHAR =  0x0000000000100020,
		FAILED_TEXT_CONTAIN_INVALID_BREAK = 0x0000000000100040,

		FAILED_TEXT_INVALID_CHARCODE =      0x0000000000100100,
		FAILED_TEXT_INVALID_BREAK =         0x0000000000100200,
		FAILED_TEXT_INVALID_SYNTAX =        0x0000000000100400,

		// TYPE
		FAILED_INVALID_TYPE =               0x0000000000200001,
		FAILED_INVALID_HANDLE =             0x0000000000200002,

		// FILE
		FAILED_FILE_READ =                  0x0000000001000010,
		FAILED_FILE_WRITE =                 0x0000000001000020,
		FAILED_FILE_CREATE =                0x0000000001000040,
		FAILED_FILE_DELETE =                0x0000000001000080,
		FAILED_FILE_OPEN =                  0x0000000001000100,
		FAILED_FILE_MAP =                   0x0000000001000200,
		FAILED_FILE_GET =                   0x0000000001000400,
		FAILED_FILE_ACCESS =                0x0000000001000800,
		FAILED_FILE_LOCK =                  0x0000000001001000,
		FAILED_FILE_NOT_FOUND =             0x0000000001002000,
		FAILED_FILE_ARLEADY_EXIST =         0x0000000001004000,

		// DIRECTORY
		FAILED_DIRECTORY_CREATE =           0x0000000002000001,
		FAILED_DIRECTORY_DELETE =           0x0000000002000002,
		FAILED_DIRECTORY_GET =              0x0000000002000004,
		FAILED_DIRECTORY_ACCESS =           0x0000000002000008,
		FAILED_DIRECTORY_LOCK =             0x0000000002000010,
		FAILED_DIRECTORY_NOT_FOUND =        0x0000000002000020,
		FAILED_DIRECTORY_ARLEADY_EXIST =    0x0000000002000040,

		// API or System call
		FAILED_ALLOC_ERROR =                0x0000000004000001,
		FAILED_TIME_OUT =                   0x0000000004000002,
		FAILED_MANY_CALL =                  0x0000000004000004,

		// Compiling
		FAILED_DEPRECATED =                 0x0000000010000001,
		FAILED_LEGACY =                     0x0000000010000002,

		FAILED_UNIMPREMENTED =              0x0000000020000001,

		FAILED_INCOMPATIBLE_OS =            0x0000000040000001,
		FAILED_INCOMPATIBLE_COMPILER =      0x0000000040000002,
		FAILED_INCOMPATIBLE_PROCESSOR =     0x0000000040000004,

		FAILED_VERSION_TOO_OLD =            0x0000000040000010,
		FAILED_VERSION_TOO_NEW =            0x0000000040000020,
		FAILED_VERSION_NOT_MATCH =          0x0000000040000040,

		// Other
		FAILED_INVALID =                    0x0000000080000001,
		FAILED_WHY_COME_HERE =              0x0000000080000002,
		FAILED_UNEXPECTED =                 0x0000000080000004,
	};

	inline constexpr uint64_t _CreateCcResultBaseFailedArg(_CcResultFlag_Reason res)
	{
		return static_cast<uint64_t>(static_cast<uint64_t>(_CcResultFlag_Success::FAILED) | static_cast<uint64_t>(_CcResultFlag_ErrorPos::ARG) | static_cast<uint64_t>(_CcResultFlag_Derived::CRBASE) | (static_cast<uint64_t>(res) & 0x0000ffffffffffffULL));
	}

	inline constexpr uint64_t _CreateCcResultBaseFailed(_CcResultFlag_Reason res)
	{
		return static_cast<uint64_t>(static_cast<uint64_t>(_CcResultFlag_Success::FAILED) | static_cast<uint64_t>(_CcResultFlag_ErrorPos::MAIN) | static_cast<uint64_t>(_CcResultFlag_Derived::CRBASE) | (static_cast<uint64_t>(res) & 0x0000ffffffffffffULL));
	}

	enum class _tagCcResult : uint64_t
	{
		SUCCESS =				                    0x0,
		ZERO =                                      SUCCESS,

		FAILED_NULLPTR =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_NULLPTR),
		FAILED_ARG_NULLPTR =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_NULLPTR),
		FAILED_NOT_NULLPTR =                        _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_NOT_NULLPTR),
		FAILED_ARG_NOT_NULLPTR =                    _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_NOT_NULLPTR),

		FAILED_HANDLE_ALREADY_INITIALIZED =         _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_HANDLE_ALREADY_INITIALIZED),
		FAILED_ARG_HANDLE_ALREADY_INITIALIZED =     _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_HANDLE_ALREADY_INITIALIZED),
		FAILED_HANDLE_NOT_INITIALIZED =             _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_HANDLE_NOT_INITIALIZED),
		FAILED_ARG_HANDLE_NOT_INITIALIZED =         _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_HANDLE_NOT_INITIALIZED),
		FAILED_HANDLE_NEW =                         _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_HANDLE_NEW),
		FAILED_ARG_HANDLE_NEW =                     _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_HANDLE_NEW),
		FAILED_HANDLE_INCOMPATIBLE =                _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_HANDLE_INCOMPATIBLE),
		FAILED_ARG_HANDLE_INCOMPATIBLE =            _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_HANDLE_INCOMPATIBLE),
		FAILED_HANDLE_BROKEN =                      _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_HANDLE_BROKEN),
		FAILED_ARG_HANDLE_BROKEN =                  _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_HANDLE_BROKEN),

		FAILED_TOO_BIG =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TOO_BIG),
		FAILED_ARG_TOO_BIG =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TOO_BIG),
		FAILED_TOO_SMALL =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TOO_SMALL),
		FAILED_ARG_TOO_SMALL =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TOO_SMALL),

		FAILED_ONLY_GT =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_ONLY_GT),
		FAILED_ARG_ONLY_GT =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_ONLY_GT),
		FAILED_ONLY_LT =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_ONLY_LT),
		FAILED_ARG_ONLY_LT =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_ONLY_LT),
		FAILED_ONLY_GE =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_ONLY_GE),
		FAILED_ARG_ONLY_GE =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_ONLY_GE),
		FAILED_ONLY_LE =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_ONLY_LE),
		FAILED_ARG_ONLY_LE =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_ONLY_LE),

		FAILED_NOT_ZERO =                           _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_NOT_ZERO),
		FAILED_ARG_NOT_ZERO =                       _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_NOT_ZERO),
		FAILED_ONLY_ZERO =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_ONLY_ZERO),
		FAILED_ARG_ONLY_ZERO =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_ONLY_ZERO),
		FAILED_RANGE_OUT =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_RANGE_OUT),
		FAILED_ARG_RANGE_OUT =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_RANGE_OUT),

		FAILED_INVALID_ALLOC_SIZE =                 _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INVALID_ALLOC_SIZE),
		FAILED_ARG_INVALID_ALLOC_SIZE =             _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INVALID_ALLOC_SIZE),

		FAILED_INVALID_FLAG =                       _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INVALID_FLAG),
		FAILED_ARG_INVALID_FLAG =                   _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INVALID_FLAG),
		FAILED_INVALID_MULTI_FLAG =                 _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INVALID_MULTI_FLAG),
		FAILED_ARG_INVALID_MULTI_FLAG =             _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INVALID_MULTI_FLAG),
		FAILED_FLAG_NOT_MATCH =                     _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FLAG_NOT_MATCH),
		FAILED_ARG_FLAG_NOT_MATCH =                 _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FLAG_NOT_MATCH),

		FAILED_TEXT_NULL_TERMINALED =               _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_NULL_TERMINALED),
		FAILED_ARG_TEXT_NULL_TERMINALED =           _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_NULL_TERMINALED),
		FAILED_TEXT_NOT_NULLTERMINALED =            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_NOT_NULLTERMINALED),
		FAILED_ARG_TEXT_NOT_NULLTERMINALED =        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_NOT_NULLTERMINALED),
		FAILED_TEXT_CONTAIN_NULL_CHAR =             _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_NULL_CHAR),
		FAILED_ARG_TEXT_CONTAIN_NULL_CHAR =         _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_NULL_CHAR),
		FAILED_TEXT_CONTAIN_CONTROL_CODE =          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_CONTROL_CODE),
		FAILED_ARG_TEXT_CONTAIN_CONTROL_CODE =      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_CONTROL_CODE),
		FAILED_TEXT_CONTAIN_BREAK_CHAR =            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_BREAK_CHAR),
		FAILED_ARG_TEXT_CONTAIN_BREAK_CHAR =        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_BREAK_CHAR),
		FAILED_TEXT_CONTAIN_INVALID_CHAR =          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_INVALID_CHAR),
		FAILED_ARG_TEXT_CONTAIN_INVALID_CHAR =      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_INVALID_CHAR),
		FAILED_TEXT_CONTAIN_INVALID_BREAK =         _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_INVALID_BREAK),
		FAILED_ARG_TEXT_CONTAIN_INVALID_BREAK =     _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_CONTAIN_INVALID_BREAK),

		FAILED_TEXT_INVALID_CHARCODE =              _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_INVALID_CHARCODE),
		FAILED_ARG_TEXT_INVALID_CHARCODE =          _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_INVALID_CHARCODE),
		FAILED_TEXT_INVALID_BREAK =                 _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_INVALID_BREAK),
		FAILED_ARG_TEXT_INVALID_BREAK =             _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_INVALID_BREAK),
		FAILED_TEXT_INVALID_SYNTAX =                _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TEXT_INVALID_SYNTAX),
		FAILED_ARG_TEXT_INVALID_SYNTAX =            _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TEXT_INVALID_SYNTAX),


		FAILED_INVALID_TYPE =                       _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INVALID_TYPE),
		FAILED_ARG_INVALID_TYPE =                   _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INVALID_TYPE),
		FAILED_INVALID_HANDLE =                     _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INVALID_HANDLE),
		FAILED_ARG_INVALID_HANDLE =                 _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INVALID_HANDLE),


		FAILED_FILE_READ =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_READ),
		FAILED_ARG_FILE_READ =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_READ),
		FAILED_FILE_WRITE =                         _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_WRITE),
		FAILED_ARG_FILE_WRITE =                     _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_WRITE),
		FAILED_FILE_CREATE =                        _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_CREATE),
		FAILED_ARG_FILE_CREATE =                    _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_CREATE),
		FAILED_FILE_DELETE =                        _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_DELETE),
		FAILED_ARG_FILE_DELETE =                    _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_DELETE),
		FAILED_FILE_OPEN =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_OPEN),
		FAILED_ARG_FILE_OPEN =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_OPEN),
		FAILED_FILE_MAP =                           _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_MAP),
		FAILED_ARG_FILE_MAP =                       _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_MAP),
		FAILED_FILE_GET =                           _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_GET),
		FAILED_ARG_FILE_GET =                       _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_GET),
		FAILED_FILE_ACCESS =                        _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_ACCESS),
		FAILED_ARG_FILE_ACCESS =                    _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_ACCESS),
		FAILED_FILE_LOCK =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_LOCK),
		FAILED_ARG_FILE_LOCK =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_LOCK),
		FAILED_FILE_NOT_FOUND =                     _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_NOT_FOUND),
		FAILED_ARG_FILE_NOT_FOUND =                 _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_NOT_FOUND),
		FAILED_FILE_ARLEADY_EXIST =                 _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_FILE_ARLEADY_EXIST),
		FAILED_ARG_FILE_ARLEADY_EXIST =             _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_FILE_ARLEADY_EXIST),


		FAILED_DIRECTORY_CREATE =                   _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_CREATE),
		FAILED_ARG_DIRECTORY_CREATE =               _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_CREATE),
		FAILED_DIRECTORY_DELETE =                   _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_DELETE),
		FAILED_ARG_DIRECTORY_DELETE =               _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_DELETE),
		FAILED_DIRECTORY_GET =                      _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_GET),
		FAILED_ARG_DIRECTORY_GET =                  _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_GET),
		FAILED_DIRECTORY_ACCESS =                   _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_ACCESS),
		FAILED_ARG_DIRECTORY_ACCESS =               _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_ACCESS),
		FAILED_DIRECTORY_LOCK =                     _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_LOCK),
		FAILED_ARG_DIRECTORY_LOCK =                 _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_LOCK),
		FAILED_DIRECTORY_NOT_FOUND =                _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_NOT_FOUND),
		FAILED_ARG_DIRECTORY_NOT_FOUND =            _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_NOT_FOUND),
		FAILED_DIRECTORY_ARLEADY_EXIST =            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DIRECTORY_ARLEADY_EXIST),
		FAILED_ARG_DIRECTORY_ARLEADY_EXIST =        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DIRECTORY_ARLEADY_EXIST),


		FAILED_ALLOC_ERROR =                        _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_ALLOC_ERROR),
		FAILED_ARG_ALLOC_ERROR =                    _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_ALLOC_ERROR),
		FAILED_TIME_OUT =                           _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_TIME_OUT),
		FAILED_ARG_TIME_OUT =                       _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_TIME_OUT),
		FAILED_MANY_CALL =                          _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_MANY_CALL),
		FAILED_ARG_MANY_CALL =                      _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_MANY_CALL),


		FAILED_DEPRECATED =                         _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_DEPRECATED),
		FAILED_ARG_DEPRECATED =                     _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_DEPRECATED),
		FAILED_LEGACY =                             _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_LEGACY),
		FAILED_ARG_LEGACY =                         _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_LEGACY),

		FAILED_UNIMPREMENTED =                      _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_UNIMPREMENTED),
		FAILED_ARG_UNIMPREMENTED =                  _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_UNIMPREMENTED),

		FAILED_INCOMPATIBLE_OS =                    _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INCOMPATIBLE_OS),
		FAILED_ARG_INCOMPATIBLE_OS =                _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INCOMPATIBLE_OS),
		FAILED_INCOMPATIBLE_COMPILER =              _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INCOMPATIBLE_COMPILER),
		FAILED_ARG_INCOMPATIBLE_COMPILER =          _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INCOMPATIBLE_COMPILER),
		FAILED_INCOMPATIBLE_PROCESSOR =             _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INCOMPATIBLE_PROCESSOR),
		FAILED_ARG_INCOMPATIBLE_PROCESSOR =         _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INCOMPATIBLE_PROCESSOR),

		FAILED_VERSION_TOO_OLD =                    _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_VERSION_TOO_OLD),
		FAILED_ARG_VERSION_TOO_OLD =                _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_VERSION_TOO_OLD),
		FAILED_VERSION_TOO_NEW =                    _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_VERSION_TOO_NEW),
		FAILED_ARG_VERSION_TOO_NEW =                _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_VERSION_TOO_NEW),
		FAILED_VERSION_NOT_MATCH =                  _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_VERSION_NOT_MATCH),
		FAILED_ARG_VERSION_NOT_MATCH =              _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_VERSION_NOT_MATCH),


		FAILED_INVALID =                            _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_INVALID),
		FAILED_ARG_INVALID =                        _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_INVALID),
		FAILED_WHY_COME_HERE =                      _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_WHY_COME_HERE),
		FAILED_ARG_WHY_COME_HERE =                  _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_WHY_COME_HERE),
		FAILED_UNEXPECTED =                         _CreateCcResultBaseFailed(_CcResultFlag_Reason::FAILED_UNEXPECTED),
		FAILED_ARG_UNEXPECTED =                     _CreateCcResultBaseFailedArg(_CcResultFlag_Reason::FAILED_UNEXPECTED),


		_USER_DEFINED_SUCCESS =      static_cast<uint64_t>(_CcResultFlag_Success::SUCCESS) | static_cast<uint64_t>(_CcResultFlag_ErrorPos::ARG) | static_cast<uint64_t>(_CcResultFlag_Derived::USER_DEFINED),
		_USER_DEFINED_FAILED_ARG =   static_cast<uint64_t>(_CcResultFlag_Success::FAILED) | static_cast<uint64_t>(_CcResultFlag_ErrorPos::ARG) | static_cast<uint64_t>(_CcResultFlag_Derived::USER_DEFINED),
		_USER_DEFINED_FAILED =       static_cast<uint64_t>(_CcResultFlag_Success::FAILED) | static_cast<uint64_t>(_CcResultFlag_ErrorPos::MAIN) | static_cast<uint64_t>(_CcResultFlag_Derived::USER_DEFINED)
	};

	template <typename _CCRTYPE>
	inline constexpr CcResult CreateCcResultSuccess(_CCRTYPE res)
	{
		return static_cast<CcResult>(static_cast<uint64_t>(CcResult::_USER_DEFINED_SUCCESS) | (static_cast<uint64_t>(res) & 0x0000ffffffffffffULL));
	}

	template <typename _CCRTYPE>
	inline constexpr CcResult CreateCcResultFailedArg(_CCRTYPE res)
	{
		return static_cast<CcResult>(static_cast<uint64_t>(CcResult::_USER_DEFINED_FAILED_ARG) | (static_cast<uint64_t>(res) & 0x0000ffffffffffffULL));
	}

	template <typename _CCRTYPE>
	inline constexpr CcResult CreateCcResultFailed(_CCRTYPE res)
	{
		return static_cast<CcResult>(static_cast<uint64_t>(CcResult::_USER_DEFINED_FAILED) | (static_cast<uint64_t>(res) & 0x0000ffffffffffffULL));
	}


	inline constexpr bool CCRESULT_HAS_ARG_ERROR(CcResult res)
	{
		int64_t tmp_res = static_cast<int64_t>(res);
		if (tmp_res >= 0)return false;
		if ((tmp_res & static_cast<int64_t>(_CcResultFlag_ErrorPos::MAIN)) != static_cast<int64_t>(_CcResultFlag_ErrorPos::MAIN))return true;
		return false;
	}

	inline constexpr bool CCRESULT_HAS_ERROR(CcResult res)
	{
		int64_t tmp_res = static_cast<int64_t>(res);
		if (tmp_res >= 0)return false;
		return true;
	}

	inline constexpr bool CCRESULT_IS_SUCCESS(CcResult res)
	{
		if (static_cast<int64_t>(res) >= 0)return true;
		return false;
	}

	inline constexpr bool CCRESULT_HAS_BASE_ARG_ERROR(CcResult res)
	{
		int64_t tmp_res = static_cast<int64_t>(res);
		if (tmp_res >= 0)return false;
		if ((tmp_res & static_cast<int64_t>(_CcResultFlag_Derived::USER_DEFINED)) == static_cast<int64_t>(_CcResultFlag_Derived::USER_DEFINED))return false;
		if ((tmp_res & static_cast<int64_t>(_CcResultFlag_ErrorPos::MAIN)) != static_cast<int64_t>(_CcResultFlag_ErrorPos::MAIN))return true;
		return false;
	}

	inline constexpr bool CCRESULT_HAS_BASE_ERROR(CcResult res)
	{
		int64_t tmp_res = static_cast<int64_t>(res);
		if (tmp_res >= 0)return false;
		if ((tmp_res & static_cast<int64_t>(_CcResultFlag_Derived::USER_DEFINED)) == static_cast<int64_t>(_CcResultFlag_Derived::USER_DEFINED))return false;
		return true;
	}

	inline constexpr bool CCRESULT_IS_BASE_SUCCESS(CcResult res)
	{
		int64_t tmp_res = static_cast<int64_t>(res);
		if ((tmp_res & static_cast<int64_t>(_CcResultFlag_Derived::USER_DEFINED)) != static_cast<int64_t>(_CcResultFlag_Derived::USER_DEFINED))return false;
		if (tmp_res >= 0)return true;
		return false;
	}

#endif

}

#endif
