#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
/* Attending Workshops in C++ - Hacker Rank Solution START */
#include <vector>
#include <iostream>

typedef pair<int,int> p;
typedef vector<p> Available_Workshops;

Available_Workshops* initialize(int *start_time, int *duration, int n) {
    auto aw = new Available_Workshops(n);
    for(int i = 0; i < n; i++){
        aw->at(i).first = start_time[i];
        aw->at(i).second = start_time[i]+duration[i];
    }
    return aw;
}

int CalculateMaxWorkshops(Available_Workshops* data) {
    sort(data->begin(),data->end(), [](const p &a, const p &b) { return a.second < b.second; });
    int f = 0, res = 0;
    for(int i = 0; i < data->size(); i++){
        if(data->at(i).first >= f){
            res++;
            f = data->at(i).second;
        }
    }
    return res;
}
/* Attending Workshops in C++ - Hacker Rank Solution END */

int main(int argc, char *argv[]) 
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}