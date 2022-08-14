#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    /* Sets-STL in C++ - Hacker Rank Solution START */
    set <int> s;
    int N = 0, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int q = 0, x = 0;
        cin >> q;
        cin >> x;
        if (q == 1)
        {
            s.insert(x);
        }
        else if (q == 2)
        {
            s.erase(x);
        }
        else
        {
            set<int>::iterator itr=s.find(x);
            if (itr == s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    /* Sets-STL in C++ - Hacker Rank Solution END */ 
    return 0;
}