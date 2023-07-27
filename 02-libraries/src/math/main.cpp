#include <libpow/pow.hpp>
#include <libsqrt/sqrt.hpp>

#include <iostream>

int main()
{
    std::cout << "2 ^ 2 = " << pow2::pow2(2.0) << '\n';
    std::cout << "sqrt(2) = " << sqrt_t::sqrt(2.0) << '\n';
}
