#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    ifstream ifile(argv[1]);
    ofstream ofile1(argv[2]);
    ofstream ofile2(argv[3]);

    istream_iterator<int> is_iter(ifile);
    ostream_iterator<int> os_iter1(ofile1);
    ostream_iterator<int> os_iter2(ofile2);

    while (is_iter != istream_iterator<int>()) {
        (*is_iter % 2 == 0) ? * os_iter1 = *is_iter++ : * os_iter2 = *is_iter++;
    }
}
