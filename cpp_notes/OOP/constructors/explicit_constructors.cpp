#include <iostream>

class Book {
public:
    Book() = default;
    Book(int num) : num(num)
    {
        std::cout << "Book(int num)\n";
    }

private:
    int num;
};

class Book_expl {
public:
    Book_expl() = default;

    explicit Book_expl(int num) : num(num)
    {
        std::cout << "Book_expl(int num)\n";
    }

private:
    int num;
};

int main()
{
    Book bdef1 = 1;

    Book_expl bdef2 = 2;
}
