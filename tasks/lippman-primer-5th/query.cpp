#include <bits/stdc++.h>

using namespace std;

class text_query;

class query_result {
    friend class text_query;

public:
    void print() const
    {
        for (const auto& c : data) {
            cout << "s: " << c.first << '\t' << "numbers: ";
            for (const auto& line_n : c.second) {
                cout << line_n << ' ';
            }
            cout << '\n';
        }
    }

private:
    map<string, set<size_t>> data;
};

class text_query {
public:
    text_query() = default;

    text_query(const string& s)
    {
        fstream file(s);
        if (!file.is_open()) {
            cout << "FILE DOES NOT EXIST\n";
        }

        string st;

        while (getline(file, st)) {
            lines.push_back(st);
        }

        file.close();
    }

    void make_query(query_result& result, const string& word)
    {
        size_t lines_cnter = 0;

        for (auto i = lines.begin(); i != lines.end(); ++i) {
            auto pos = i->find(word);

            if (pos != string::npos) {
                result.data[*i].insert(lines_cnter);
            }

            ++lines_cnter;
        }
    }

private:
    vector<string> lines;
};

int main()
{
    query_result qe;
    text_query text(
            "/home/cicada44/cicada-main/edu/training/tasks/lippman-primer-5th/"
            "query.txt");

    text.make_query(qe, "the");

    qe.print();
}
