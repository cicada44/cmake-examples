#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void read_f_assoc(map<string, vector<string>>& m)
{
    fstream file(
            "/home/cicada44/cicada-main/edu/training/tasks/lippman-primer-5th/"
            "11-33-assoc.txt");

    string readable;

    while (getline(file, readable)) {
        stringstream sstream;
        sstream.str(readable);

        string word;
        sstream >> word;
        m[word];

        string assoc;
        while (sstream >> assoc) {
            m[word].push_back(assoc);
        }
    }

    file.close();
}

void read_f_text(vector<string>& m)
{
    fstream file(
            "/home/cicada44/cicada-main/edu/training/tasks/lippman-primer-5th/"
            "11-33-text.txt");

    string readable;

    while (file >> readable) {
        m.push_back(readable);
    }

    // for (const auto& c : m) {
    //     cout << c << '\n';
    // }

    file.close();
}

void print_result(
        const vector<string>& text, const map<string, vector<string>>& m)
{
    for (const auto& c : text) {
        if (m.find(c) != m.end()) {
            for (const auto& c : m.find(c)->second) {
                cout << c << ' ';
            }
        } else {
            cout << c << ' ';
        }
    }
}

int main(int argc, char** argv)
{
    map<string, vector<string>> m;

    read_f_assoc(m);

    // for (const auto& c : m) {
    // cout << "first - " << c.first << "\tsecond - " << c.second << '\n';
    // }

    vector<string> mset;

    read_f_text(mset);

    print_result(mset, m);
}
