#include<bits/stdc++.h>
using namespace std;

int main(){
    string a ="Hello";
    string b = "World";
    //Normal bhavei concatenate korte parba
    a = a+b; //HelloWorld
  
    string c= "Shaks";
    // append  output:  HelloWorldShaks
    a.append(c);


    //last e character insert korte chao
    //pushback memory expand korte pare
    //HelloWorldShaksA -> A ta add korse
    a.push_back('A');
    cout<<a<<endl;
    //Another way
    // a = a+ "A"; 

    //pop hocce delete kore dibe last theke ber kore dibe
    a.pop_back();
    cout<<a<<endl;

    return 0;
}