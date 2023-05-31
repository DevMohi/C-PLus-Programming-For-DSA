//Related to element access

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ="farhan";


    // //accessing
    // cout<< s[0]<<endl; //erkm kora jai
    // cout<< s.at(0)<<endl; //erkm kora jai
    //aita first index dei
    cout<<s.front()<<endl;


    // last index chaile 
    cout<<s[s.size()-1]<<endl;
    //back() function die last element access kroa jai
    cout<<s.back()<<endl;


    return 0;
}