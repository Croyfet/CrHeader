#include <cstdio>
#include <cstdint>
#include <iostream>

#include <CrHeader_error.hpp>

int main()
{
	cc::CcResult ret = cc::CcResult::FAILED_ARG_NULLPTR;
	cc::CcResult ret2 = cc::CcResult::SUCCESS;

	std::printf("%llx\r\n", static_cast<uint64_t>(ret));

	std::cout << static_cast<uint64_t>(ret) << std::endl;

	std::cout << "Size : " << sizeof(ret) << std::endl;

	return 0;
}
