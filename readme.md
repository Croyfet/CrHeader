<!--

This document is written in Markdown.
You can preview on such as VisualStudio Code.
If you want to know more, search with "vscode markdown" or refer to official document https://code.visualstudio.com/Docs/languages/markdown .

-->


# CrHeader
Statndard header

## Error

- [enum class] CcResult
- [enum] CcError

ex.)
```C++
cc::CcResult _SOME_FUNCTION_(void* lp)
{
	if(lp == nullptr)return cc::CcResult::FAILED_ARG_NULLPTR;
	...
	return cc::CcResult::SUCCESS;
}
```

## Const

Include physical or mathematical constant

ex.)
```C++
int n = _SOME_VALUE_;
std::sin(n * cc::cst::math::PI_CIRCUMFERENCE); //pi definition

int temperature = _SOME_VALUE_;
double beta = std::exp(1.0 / (temperature * cc::cst::phys::BK_BOLTZMANN)); //Boltzmann const
```

## Type

Win32tic type definition such as `cc::QWORD` and parse bit and so on.

ex.)
```C++
std::DWORD dwRaw = 0x00ff0000;
std::DWORD dwValue = H1DWORD(dwRaw); // 0x000000ff
```

<!-- Written by Croyfet in 2022-->
