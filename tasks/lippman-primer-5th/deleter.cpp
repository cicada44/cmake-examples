#include <cstdlib>
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    shared_ptr<double[]> sptr_c(
            new double[10], [](auto c) { cout << "CALLABLE\n"; });
}
