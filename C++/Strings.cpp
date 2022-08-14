#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1,str2,str3;
    char b,a;
    int strlen1,strlen2;
    //string one 
    cin>>str1;
    //string two
      cin>>str2;
    
    //first string size
    strlen1 = str1.size();
    //second string size
    strlen2 = str2.size();
    cout<<strlen1;
    cout<<" "<<strlen2;
    
    // concatinate two string
    str3 = str1+str2;
    cout<<"\n"<<str3;
    
    // a' b'
    a = str2[0];
    b = str1[0];        
    str1[0] = a;
    str2[0] = b;
    cout<<"\n";
    cout<<str1;
    cout<<" "<<str2;
    return 0;
}