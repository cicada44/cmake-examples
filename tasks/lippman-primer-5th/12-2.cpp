#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class BlobS {
public:
    BlobS() : shared_data(make_shared<vector<string>>())
    {
    }

    BlobS(const initializer_list<string>& il)
        : shared_data(make_shared<vector<string>>(il))
    {
    }

    string& pop_back()
    {
        check(0, "popping mt container");
        shared_data->pop_back();
        return shared_data->back();
    }

    void print()
    {
        for (const auto& c : *shared_data) {
            cout << c << ' ';
        }
        cout << '\n';
    }

private:
    shared_ptr<vector<string>> shared_data;

    void check(size_t i, const string& msg)
    {
        if (i >= shared_data->size()) {
            throw out_of_range(msg);
        }
    }
};

int main()
{
    BlobS sblob = {"ABC", "DEF", "GHI", "JKL"};

    {
        BlobS s2 = sblob;
        s2.pop_back();
        sblob.print();
        s2.print();
    }
}
