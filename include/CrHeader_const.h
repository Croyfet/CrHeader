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


#ifndef _INCLUDE_GUARD_CRHEADER_CONST_H_
#define _INCLUDE_GUARD_CRHEADER_CONST_H_

#ifdef __cplusplus
extern "C"
{
#endif


	/* Mathematical Constant  */

	// Circumference
	//     Common Symbols   : (pi)
	//     unit             : [0]
	#define CC_CONST_MATH_PI_CIRCUMFERENCE ((double)3.14159265358979323846)

	// Napier Number
	//     Common Symbols   : e
	//     unit             : [0]
	#define CC_CONST_MATH_E_NAPIER ((double)2.71828182845904523536)


	/* Physical const */

	// Boltzmann constant
	//     Common Symbols   : k_b
	//     unit             : J/K
	//     value            : 1.380649*10^(-23)
	#define CC_CONST_PHYS_BK_BOLTZMANN ((double)0.00000000000000000000001380649)

	// Speed of Light
	//     Common Symbols   : c
	//     unit             : m/s^2
	//     value            : 2.99792458*10^8
	#define CC_CONST_PHYS_C_SPEEDLIGHT ((double)299792458.0)


#ifdef __cplusplus
}
#endif

#endif
