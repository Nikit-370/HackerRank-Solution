#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   /* Lower Bound-STL in C++ - Hacker Rank Solution START */  
   int m, n, num, i, val;
   cin >>m;
   vector <int> v(m);
   for(i = 0; i < m; i++)
       cin >> v[i];
   cin>>n;
   for(i = 0; i < n; i++)
   {
       cin >> val;
       vector <int>::iterator low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
       {
           cout << "Yes " << (low - v.begin() + 1) << endl;
       }
       else
       {
           cout << "No " << (low - v.begin() + 1) << endl;
       }
   }
   /* Lower Bound-STL in C++ - Hacker Rank Solution END */
 return 0;
}