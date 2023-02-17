#include <string>

#include <iostream>

class Screen {
public:
    using pos = std::string::size_type;

    // cause there's more than 1 constructor
    Screen(int x, int y) : x(x), y(y)
    {
    }

private:
    pos x;
    pos y;
};

int main()
{
    Screen sc1(1, 1);
}
