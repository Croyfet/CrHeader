# CcResult

## Header
CrHeader_error.hpp

## namespace
cc

## Declear

```C++
enum class _tagCcResult : uint64_t;
using CcResult = enum class _tagCcResult : uint64_t;
```

## Definition

```C++
enum class _tagCcResult : uint64_t
{
	/* identifier */
};
```

- [00] Success

	Success (0b0) or Failed (0b1)

- [01] Error Position

	Argument (0b0) or Main (0b1)

- [02] Derived

	Base definition (0b0) or Derived definition (0b1)

- [03 - 07] \_Reserved\_

- [08 - 31] \_Reserved\_

- [32 - 64] Reason



Combination with `CrResultFlag_Success` and `CrResultFlag_` and `CrResultFlag_` 

## Identifier

| Identifier | Value | Definition |
|---|---|---|
| SUCCESS | 0x0 |  |
| FAILED_ARG_* | | _CreateCcResultBaseFailedArg(`_CcResultFlag_Reason`) |
| FAILED_* | | _CreateCcResultBaseFailed(`_CcResultFlag_Reason`) |

