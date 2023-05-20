#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    //Normal cin die space wala string newa jaina
    // cin>>s; 
    //getLine is similar to fgets but aita enter neina
    cin.getline(s,100);
    cout<<strlen(s);
    return 0;
}