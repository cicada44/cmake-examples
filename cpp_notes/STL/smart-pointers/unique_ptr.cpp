#include <iostream>

#include <memory>

using std::shared_ptr;

int main()
{
    shared_ptr<int> int_ptr = std::make_shared<int>(5);

    

    return 0;
}