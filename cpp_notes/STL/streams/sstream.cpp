#include <sstream>

#include <string>

#include <iostream>

void init_sstream()
{
    std::string s("some_str");
    std::string s2("some_str_2");

    // init stringstream
    std::stringstream strm1;
    std::stringstream strm2(s2);

    // returns copy of containing string
    strm1.str();

    // copies string s into strm1
    strm1.str(s);

    std::cout << "strm1.str() - " << strm1.str() << '\n'
              << "strm2.str() - " << strm2.str() << '\n';
}

int main()
{
    init_sstream();
}
