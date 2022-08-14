#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle
{
    public:
        void triangle()
        {
             cout<<"I am a triangle\n";
        }
};

class Isosceles : public Triangle
{
    public:
        void isosceles()
        {
            cout<<"I am an isosceles triangle\n";
        }
      //Write your code here.
      /* Inheritance Introduction in C++ - Hacker Rank Solution START */
        void description()
        {
            cout << "In an isosceles triangle two sides are equal" << endl;
        }
        /* Inheritance Introduction in C++ - Hacker Rank Solution END */
};

int main()
{
    Isosceles isc;
    isc.isosceles();
      isc.description();
    isc.triangle();
    return 0;
}