#include <bits/stdc++.h>

using namespace std;

class StrBlob;
class StrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
    friend ostream& operator<<(ostream& os, const StrBlob& printable_strb);

public:
    StrBlob() : data(new vector<string>())
    {
    }

    StrBlob(const initializer_list<string>& il) : data(new vector<string>(il))
    {
    }

    vector<string>::iterator begin() const
    {
        return data->begin();
    }

    vector<string>::iterator end() const
    {
        return data->end();
    }

    StrBlob& push_back(const string& pushable_str)
    {
        data->push_back(pushable_str);
        return *this;
    }

private:
    shared_ptr<vector<string>> data;

    void check_empty(vector<string>::size_type idx, const string& msg) const
    {
        if (idx >= data->size()) {
            throw out_of_range(msg);
        }
    }
};

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0)
    {
    }

    StrBlobPtr(StrBlob& sblob, size_t idx) : wptr(sblob.data), curr(idx)
    {
    }

    StrBlobPtr& operator++()
    {
        check(curr, "try to increase");
        ++curr;
        return *this;
    }

    string& operator*() const
    {
        check(curr, "operator*");
        return wptr.lock()->operator[](curr);
    }

private:
    shared_ptr<vector<string>> check(size_t idx, const string& msg) const
    {
        auto returnable = wptr.lock();

        if (returnable == nullptr) {
            throw runtime_error("unbound attempt to access");
        }

        if (idx >= returnable->size()) {
            throw out_of_range(msg);
        }

        return returnable;
    }

    weak_ptr<vector<string>> wptr;
    size_t curr;
};

ostream& operator<<(ostream& os, const StrBlob& printable_strb)
{
    for (auto i = printable_strb.begin(); i != printable_strb.end(); ++i) {
        os << *i << ' ';
    }
    os << '\n';

    return os;
}

int main()
{
    StrBlob sbl;

    fstream file(
            "/home/cicada44/cicada-main/edu/training/tasks/lippman-primer-5th/"
            "12-20.txt");

    if (!file.is_open()) {
        cout << "can't open file\n";
    }

    string s;

    while (getline(file, s)) {
        sbl.push_back(s);
    }

    StrBlobPtr strbp(sbl, 0);

    for (auto i = 0; i != 4; ++i) {
        cout << *strbp << '\n';
        ++strbp;
    }
}