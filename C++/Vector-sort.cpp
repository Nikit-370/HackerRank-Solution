#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Vector-Sort in C++ - Hacker Rank Solution Start */
    int n,i;
    cin >> n;
    vector<int> numbers(n, 0);
    for(i = 0; i < n; i++) 
    {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    for(i = 0; i < n; i++) 
    {
        cout << numbers[i] << " ";
    }
    /* Vector-Sort in C++ - Hacker Rank Solution End */
    return 0;
}