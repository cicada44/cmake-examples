#include <iostream>

#include <fstream>

void open_close_fstream()
{
    // non-bind
    std::fstream fstr1;

    // binded with file
    std::fstream fstr2("file.txt");
    std::fstream fstr3("file.txt", std::ios_base::ate);

    // open file
    fstr1.open("file.txt");
    // fstr1.open("file.txt", std::ios_base::ate);

    // close
    fstr1.close();
    fstr2.close();
    fstr3.close();
}

void open_modes()
{
    // to the end before every writing
    std::fstream fstr("file.txt", std::ofstream::app);
    std::cout << "fstr.is_open() - " << fstr.is_open() << '\n';
    fstr << "eee";
    fstr.close();

    // to the end
    fstr.open("file.txt", std::ofstream::ate);
    std::cout << "fstr.is_open() - " << fstr.is_open() << '\n';
    fstr << "end\n";
    fstr.close();

    fstr.open("file.txt", std::ios_base::in);

    std::string s;

    while (fstr >> s) {
        std::cout << s << ' ';
    }

    std::cout << '\n';

    fstr.close();
}

int main()
{
    // open_close_fstream();
    // open_modes();
}
