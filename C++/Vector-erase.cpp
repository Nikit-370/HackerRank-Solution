#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    /* Vector-Erase in C++ - Hacker Rank Solution START */
    vector<int> v ;
    int x,i,j; 
    int n; 
    cin>>n;
    for(i =0 ; i<n ; i++)
    {
        cin>>x; 
        v.push_back(x);
    }
    int q1, q2, q3;
    cin>>q1;
    cin>>q2>>q3;
    v.erase (v.begin()+(q1-1));
    v.erase(v.begin()+q2-1 , v.begin()+q3-1);
    cout << v.size() << endl;
    for(j =0 ; j< v.size() ; j++)
    {
        cout << v.at(j) << " " ;  
    }
    
    /* Vector-Erase in C++ - Hacker Rank Solution END */
return 0;
}