#include<iostream>

//header file for setprecision

#include<iomanip>
using namespace std;

int main(){
    float a;
    cin>>a;
    //This is for printing 2 decimal place
    cout<<fixed<<setprecision(2)<<a;
    return 0;
}