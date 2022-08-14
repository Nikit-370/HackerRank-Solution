#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

/* C++ Class Template Specialization in C++ - Hacker Rank Solution START */
template <typename T> struct Traits;
char s []="unknown";
char f0 []="apple";
char f1 []="orange";
char f2 []="pear";
char c0 []="red";
char c1 []="green";
char c2 []="orange";
template <>
struct Traits<Fruit>
{
    public:
    static char* name(int a)
    {
        if(a>=3 || a<0)
            return s;
        else if (a==0)
            return f0;
        else if (a==1)
            return f1;
        else
            return f2;            
    }
};

template <>
struct Traits<Color>
{
    public:
    static char* name(int a)
    {
        if(a>=3 || a<0)
            return s;
        else if (a==0)
            return c0;
        else if (a==1)
            return c1;
        else
            return c2;  
    }
};
/* C++ Class Template Specialization in C++ - Hacker Rank Solution END */

int main()
{
    int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}