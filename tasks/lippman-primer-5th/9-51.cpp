#include <iostream>

#include <string>

using namespace std;

struct Date {
    size_t year, month, day;
    Date() = default;

    Date(const string& s)
    {
        if (s.find('/') != s.size()) {
            year = stoi(s.substr(0, s.find('/')));
            month = stoi(s.substr(
                    s.find_first_of('/') + 1, s.find_last_of('/') - 1));
            day = stoi(s.substr(s.find_last_of('/') + 1, s.size()));
        }
    }
};

ostream& operator<<(ostream& os, const Date& d)
{
    cout << d.year << ' ' << d.month << ' ' << d.day << '\n';
    return os;
}

int main()
{
    Date d1("1900/1/1");

    cout << d1;
}
