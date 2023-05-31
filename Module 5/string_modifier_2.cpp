#include<bits/stdc++.h>
using namespace std;

int main(){
    // string a ="Hello";
    // string b = "A";

    // a = "Gelo"; //aita erkm na kore 
    // // a.assign("Gelo") // aibabe o kora jai 

    string a= "HelloWorld";
    //kono index dile value delete kore dibe
    //oitar porer shob index
    //Input => HelloWorld  
    // Hell -> output
    // -> similar to slice 
    // first index hocce starting index and
    // second  hocce length of koita delete korba 
 

    // a.erase(index,length of char you want to delete);
    // a.erase(4,2);
    // cout<<a<<endl;

    //same as erase baas last param ta hocce ki die replace korba
    // a.replace(4,3,"so");
    // cout<<a<<endl;


    //aita just insert kore
    // HellrahatoWorld
    a.insert(4,"rahat");
    cout<<a<<endl;


    return 0;
}