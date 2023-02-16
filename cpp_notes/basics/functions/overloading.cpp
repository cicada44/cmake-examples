#include <iostream>

void print(const char*);
void print(const char*, const int*);
void print(const char*, const int*);
void print();

// cannot overload function by returning value
double print();

// ambiguos
void print(const char*, const int*, int n = 1);

int main()
{
}
