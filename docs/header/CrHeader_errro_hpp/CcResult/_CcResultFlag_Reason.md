# \_CcResultFlag\_Reason

## Requirements
### Header
CrHeader_error.hpp
### namespace
cc

## Syntax

### Declear

```C++
enum class _tag_CcResultFlag_Reason : uint64_t;
using _CcResultFlag_Reason = enum class _tag_CcResultFlag_Reason : uint64_t;
```

### Definition

```C++
enum class _tag_CcResultFlag_Reason : uint64_t
{
	/* identifier */
};
```

#### Default
| Identifier | Value | Details |
|---|---|---|
| SUCCESS  | 0x0000000000000000 | Success |
| ZERO     | SUCCESS            | for initialization |

#### Pointer
| Identifier | Value | Details |
|---|---|---|
| FAILED_NULLPTR     | 0x0000000000010001 | passed nullptr to parameter |
| FAILED_NOT_NULLPTR | 0x0000000000010002 | Parameter must be nullptr |
| FAILED_ALLOC_ERROR | 0x0000000000010003 | Failed to alloc memory |

#### Handle(Pointer)
| Identifier | Value | Details |
|---|---|---|
| FAILED_HANDLE_ALREADY_INITIALIZED   | 0x0000000000020001 |  |
| FAILED_HANDLE_NOT_INITIALIZED       | 0x0000000000020002 |  |
| FAILED_NEW_HANDLE                   | 0x0000000000020003 |  |
| FAILED_INCOMPATIBLE_HANDLE          | 0x0000000000020004 |  |
| FAILED_HANDLE_BROKEN_HANDLE         | 0x0000000000020005 |  |

#### Value
| Identifier | Value | Details |
|---|---|---|
| FAILED_TOO_BIG            | 0x0000000000040001 |  |
| FAILED_TOO_SMALL          | 0x0000000000040002 |  |
| FAILED_ONLY_GT            | 0x0000000000040010 |  |
| FAILED_ONLY_LT            | 0x0000000000040020 |  |
| FAILED_ONLY_GE            | 0x0000000000040040 |  |
| FAILED_ONLY_LE            | 0x0000000000040080 |  |
| FAILED_NOT_ZERO           | 0x0000000000040100 |  |
| FAILED_ONLY_ZERO          | 0x0000000000040200 |  |
| FAILED_RANGE_OUT          | 0x0000000000040400 |  |
| FAILED_INVALID_ALLOC_SIZE | 0x0000000000080001 |  |
| FAILED_INVALID_FLAG       | 0x0000000000080010 |  |
| FAILED_INVALID_MULTI_FLAG | 0x0000000000080020 |  |
| FAILED_FLAG_NOT_MATCH     | 0x0000000000080040 |  |

#### String
| Identifier | Value | Details |
|---|---|---|
| FAILED_NULL_TERMINALED       | 0x0000000000100001 |  |
| FAILED_NOT_NULLTERMINALED    | 0x0000000000100002 |  |
| FAILED_CONTAIN_NULL_CHAR     | 0x0000000000100010 |  |
| FAILED_CONTAIN_CONTROL_CODE  | 0x0000000000100020 |  |
| FAILED_CONTAIN_BREAK_CHAR    | 0x0000000000100040 |  |
| FAILED_CONTAIN_INVALID_CHAR  | 0x0000000000100100 |  |
| FAILED_CONTAIN_INVALID_BREAK | 0x0000000000100200 |  |
| FAILED_INVALID_CHARCODE      | 0x0000000000101000 |  |
| FAILED_INVALID_BREAK         | 0x0000000000102000 |  |
| FAILED_INVALID_SYNTAX        | 0x0000000000104000 |  |

#### Type
| Identifier | Value | Details |
|---|---|---|
| FAILED_INVALID_TYPE   | 0x0000000000200001 |  |
| FAILED_INVALID_HANDLE | 0x0000000000200002 |  |

#### API or System call
| Identifier | Value | Details |
|---|---|---|
| FAILED_TIME_OUT                | 0x0000000001000001 |  |
| FAILED_MANY_CALL               | 0x0000000001000002 |  |
| FAILED_READ_FILE               | 0x0000000001000010 |  |
| FAILED_WRITE_FILE              | 0x0000000001000020 |  |
| FAILED_READ_DIRECTORY          | 0x0000000001000040 |  |
| FAILED_WRITE_DIRECTORY         | 0x0000000001000080 |  |
| FAILED_FILE_NOT_FOUND          | 0x0000000001000100 |  |
| FAILED_DIRECTORY_NOT_FOUND     | 0x0000000001000200 |  |
| FAILED_FILE_ARLEADY_EXIST      | 0x0000000001000400 |  |
| FAILED_DIRECTORY_ARLEADY_EXIST | 0x0000000001000800 |  |

#### Compiling
| Identifier | Value | Details |
|---|---|---|
| FAILED_DEPRECATED             | 0x0000000040000001 |  |
| FAILED_LEGACY                 | 0x0000000040000002 |  |
| FAILED_UNIMPREMENTED          | 0x0000000040000004 |  |
| FAILED_INCOMPATIBLE_OS        | 0x0000000040000008 |  |
| FAILED_INCOMPATIBLE_COMPILER  | 0x0000000040000010 |  |
| FAILED_INCOMPATIBLE_PROCESSOR | 0x0000000040000020 |  |
| FAILED_VERSION_TOO_OLD        | 0x0000000040000100 |  |
| FAILED_VERSION_TOO_NEW        | 0x0000000040000200 |  |
| FAILED_VERSION_NOT_MATCH      | 0x0000000040000400 |  |

#### Other
| Identifier | Value | Details |
|---|---|---|
| FAILED_INVALID       | 0x0000000080000100 |  |
| FAILED_WHY_COME_HERE | 0x0000000080001000 |  |
| FAILED_UNEXPECTED    | 0x0000000080002000 |  |

## Remarks

