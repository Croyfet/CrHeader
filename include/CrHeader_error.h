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


#ifndef _INCLUDE_GUARD_CRHEADER_ERROR_H_
#define _INCLUDE_GUARD_CRHEADER_ERROR_H_

#ifdef __cplusplus
#include <cstdint>
#else
#include <stdint.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	enum _tag_CcErrorReason
	{
		_CCERROR_REASON_NULLPTR =                   1,
		_CCERROR_REASON_NOT_NULLPTR =               2,
		_CCERROR_REASON_ALLOC_ERROR =               3,
		_CCERROR_REASON_HANDLE_INITIALIZED =        4,
		_CCERROR_REASON_NOT_INITIALIZED =           5,
		_CCERROR_REASON_NEW_HANDLE =                6,
		_CCERROR_REASON_INCOMPATIBLE_HANDLE =       7,
		_CCERROR_REASON_HANDLE_BROKEN_HANDLE =      8,
		_CCERROR_REASON_TOO_BIG =                   9,
		_CCERROR_REASON_TOO_SMALL =                 10,
		_CCERROR_REASON_ONLY_GT =                   11,
		_CCERROR_REASON_ONLY_LT =                   12,
		_CCERROR_REASON_ONLY_GE =                   13,
		_CCERROR_REASON_ONLY_LE =                   14,
		_CCERROR_REASON_NOT_ZERO =                  15,
		_CCERROR_REASON_ONLY_ZERO =                 16,
		_CCERROR_REASON_RANGE_OUT =                 17,
		_CCERROR_REASON_INVALID_ALLOC_SIZE =        18,
		_CCERROR_REASON_INVALID_FLAG =              19,
		_CCERROR_REASON_INVALID_MULTI_FLAG =        20,
		_CCERROR_REASON_FLAG_NOT_MATCH =            21,
		_CCERROR_REASON_NULL_TERMINALED =           22,
		_CCERROR_REASON_NOT_NULLTERMINALED =        23,
		_CCERROR_REASON_CONTAIN_NULL_CHAR =         24,
		_CCERROR_REASON_CONTAIN_CONTROL_CODE =      25,
		_CCERROR_REASON_CONTAIN_BREAK_CHAR =        26,
		_CCERROR_REASON_CONTAIN_INVALID_CHAR =      27,
		_CCERROR_REASON_CONTAIN_INVALID_BREAK =     28,
		_CCERROR_REASON_INVALID_CHARCODE =          29,
		_CCERROR_REASON_INVALID_BREAK =             30,
		_CCERROR_REASON_INVALID_SYNTAX =            31,
		_CCERROR_REASON_INVALID_TYPE =              32,
		_CCERROR_REASON_INVALID_HANDLE =            33,
		_CCERROR_REASON_TIME_OUT =                  34,
		_CCERROR_REASON_MANY_CALL =                 35,
		_CCERROR_REASON_READ_FILE =                 36,
		_CCERROR_REASON_WRITE_FILE =                37,
		_CCERROR_REASON_READ_DIRECTORY =            38,
		_CCERROR_REASON_WRITE_DIRECTORY =           39,
		_CCERROR_REASON_FILE_NOT_FOUND =            40,
		_CCERROR_REASON_DIRECTORY_NOT_FOUND =       41,
		_CCERROR_REASON_FILE_ARLEADY_EXIST =        42,
		_CCERROR_REASON_DIRECTORY_ARLEADY_EXIST =   43,
		_CCERROR_REASON_DEPRECATED =                44,
		_CCERROR_REASON_LEGACY =                    45,
		_CCERROR_REASON_UNIMPREMENTED =             46,
		_CCERROR_REASON_INCOMPATIBLE_OS =           47,
		_CCERROR_REASON_INCOMPATIBLE_COMPILER =     48,
		_CCERROR_REASON_INCOMPATIBLE_PROCESSOR =    49,
		_CCERROR_REASON_VERSION_TOO_OLD =           50,
		_CCERROR_REASON_VERSION_TOO_NEW =           51,
		_CCERROR_REASON_VERSION_NOT_MATCH =         52,
		_CCERROR_REASON_INVALID =                   53,
		_CCERROR_REASON_WHY_COME_HERE =             54,
		_CCERROR_REASON_UNEXPECTED =                55,
	};
	typedef enum _tag_CcErrorReason _CcErrorReason;


	enum _tagCcError
	{
		CCERROR_SUCCESS =                    0x00000000,
		CCERROR_NULLPTR =                    0x80000000 | _CCERROR_REASON_NULLPTR,
		CCERROR_NOT_NULLPTR =                0x80000000 | _CCERROR_REASON_NOT_NULLPTR,
		CCERROR_ALLOC_ERROR =                0x80000000 | _CCERROR_REASON_ALLOC_ERROR,
		CCERROR_HANDLE_INITIALIZED =         0x80000000 | _CCERROR_REASON_HANDLE_INITIALIZED,
		CCERROR_NOT_INITIALIZED =            0x80000000 | _CCERROR_REASON_NOT_INITIALIZED,
		CCERROR_NEW_HANDLE =                 0x80000000 | _CCERROR_REASON_NEW_HANDLE,
		CCERROR_INCOMPATIBLE_HANDLE =        0x80000000 | _CCERROR_REASON_INCOMPATIBLE_HANDLE,
		CCERROR_HANDLE_BROKEN_HANDLE =       0x80000000 | _CCERROR_REASON_HANDLE_BROKEN_HANDLE,
		CCERROR_TOO_BIG =                    0x80000000 | _CCERROR_REASON_TOO_BIG,
		CCERROR_TOO_SMALL =                  0x80000000 | _CCERROR_REASON_TOO_SMALL,
		CCERROR_ONLY_GT =                    0x80000000 | _CCERROR_REASON_ONLY_GT,
		CCERROR_ONLY_LT =                    0x80000000 | _CCERROR_REASON_ONLY_LT,
		CCERROR_ONLY_GE =                    0x80000000 | _CCERROR_REASON_ONLY_GE,
		CCERROR_ONLY_LE =                    0x80000000 | _CCERROR_REASON_ONLY_LE,
		CCERROR_NOT_ZERO =                   0x80000000 | _CCERROR_REASON_NOT_ZERO,
		CCERROR_ONLY_ZERO =                  0x80000000 | _CCERROR_REASON_ONLY_ZERO,
		CCERROR_RANGE_OUT =                  0x80000000 | _CCERROR_REASON_RANGE_OUT,
		CCERROR_INVALID_ALLOC_SIZE =         0x80000000 | _CCERROR_REASON_INVALID_ALLOC_SIZE,
		CCERROR_INVALID_FLAG =               0x80000000 | _CCERROR_REASON_INVALID_FLAG,
		CCERROR_INVALID_MULTI_FLAG =         0x80000000 | _CCERROR_REASON_INVALID_MULTI_FLAG,
		CCERROR_FLAG_NOT_MATCH =             0x80000000 | _CCERROR_REASON_FLAG_NOT_MATCH,
		CCERROR_NULL_TERMINALED =            0x80000000 | _CCERROR_REASON_NULL_TERMINALED,
		CCERROR_NOT_NULLTERMINALED =         0x80000000 | _CCERROR_REASON_NOT_NULLTERMINALED,
		CCERROR_CONTAIN_NULL_CHAR =          0x80000000 | _CCERROR_REASON_CONTAIN_NULL_CHAR,
		CCERROR_CONTAIN_CONTROL_CODE =       0x80000000 | _CCERROR_REASON_CONTAIN_CONTROL_CODE,
		CCERROR_CONTAIN_BREAK_CHAR =         0x80000000 | _CCERROR_REASON_CONTAIN_BREAK_CHAR,
		CCERROR_CONTAIN_INVALID_CHAR =       0x80000000 | _CCERROR_REASON_CONTAIN_INVALID_CHAR,
		CCERROR_CONTAIN_INVALID_BREAK =      0x80000000 | _CCERROR_REASON_CONTAIN_INVALID_BREAK,
		CCERROR_INVALID_CHARCODE =           0x80000000 | _CCERROR_REASON_INVALID_CHARCODE,
		CCERROR_INVALID_BREAK =              0x80000000 | _CCERROR_REASON_INVALID_BREAK,
		CCERROR_INVALID_SYNTAX =             0x80000000 | _CCERROR_REASON_INVALID_SYNTAX,
		CCERROR_INVALID_TYPE =               0x80000000 | _CCERROR_REASON_INVALID_TYPE,
		CCERROR_INVALID_HANDLE =             0x80000000 | _CCERROR_REASON_INVALID_HANDLE,
		CCERROR_TIME_OUT =                   0x80000000 | _CCERROR_REASON_TIME_OUT,
		CCERROR_MANY_CALL =                  0x80000000 | _CCERROR_REASON_MANY_CALL,
		CCERROR_READ_FILE =                  0x80000000 | _CCERROR_REASON_READ_FILE,
		CCERROR_WRITE_FILE =                 0x80000000 | _CCERROR_REASON_WRITE_FILE,
		CCERROR_READ_DIRECTORY =             0x80000000 | _CCERROR_REASON_READ_DIRECTORY,
		CCERROR_WRITE_DIRECTORY =            0x80000000 | _CCERROR_REASON_WRITE_DIRECTORY,
		CCERROR_FILE_NOT_FOUND =             0x80000000 | _CCERROR_REASON_FILE_NOT_FOUND,
		CCERROR_DIRECTORY_NOT_FOUND =        0x80000000 | _CCERROR_REASON_DIRECTORY_NOT_FOUND,
		CCERROR_FILE_ARLEADY_EXIST =         0x80000000 | _CCERROR_REASON_FILE_ARLEADY_EXIST,
		CCERROR_DIRECTORY_ARLEADY_EXIST =    0x80000000 | _CCERROR_REASON_DIRECTORY_ARLEADY_EXIST,
		CCERROR_DEPRECATED =                 0x80000000 | _CCERROR_REASON_DEPRECATED,
		CCERROR_LEGACY =                     0x80000000 | _CCERROR_REASON_LEGACY,
		CCERROR_UNIMPREMENTED =              0x80000000 | _CCERROR_REASON_UNIMPREMENTED,
		CCERROR_INCOMPATIBLE_OS =            0x80000000 | _CCERROR_REASON_INCOMPATIBLE_OS,
		CCERROR_INCOMPATIBLE_COMPILER =      0x80000000 | _CCERROR_REASON_INCOMPATIBLE_COMPILER,
		CCERROR_INCOMPATIBLE_PROCESSOR =     0x80000000 | _CCERROR_REASON_INCOMPATIBLE_PROCESSOR,
		CCERROR_VERSION_TOO_OLD =            0x80000000 | _CCERROR_REASON_VERSION_TOO_OLD,
		CCERROR_VERSION_TOO_NEW =            0x80000000 | _CCERROR_REASON_VERSION_TOO_NEW,
		CCERROR_VERSION_NOT_MATCH =          0x80000000 | _CCERROR_REASON_VERSION_NOT_MATCH,
		CCERROR_INVALID =                    0x80000000 | _CCERROR_REASON_INVALID,
		CCERROR_WHY_COME_HERE =              0x80000000 | _CCERROR_REASON_WHY_COME_HERE,
		CCERROR_UNEXPECTED =                 0x80000000 | _CCERROR_REASON_UNEXPECTED,
	};
	typedef enum _tagCcError CcError;

	inline bool CCERROR_HAS_ERROR(CcError crs) { if ((crs & 0x80000000) == 0x80000000) { return true; } else { return false; } }

	inline bool CCERROR_IS_SUCCESS(CcError crs) { if (crs >= 0x00000000) { return true; } else { return false; } }

#ifdef __cplusplus
}
#endif

#endif
