# CreateCcResultFailed [function]

## Requirements
### Header
CrHeader_error.hpp
### namespace
cc

## Syntax


```C++
	template <typename _CCRTYPE>
	inline constexpr CcResult CreateCcResultFailed(_CCRTYPE res);
```

## Remarks

Create external CcResult values.
`res` is `uint64_t` but available only under 32 bits.

