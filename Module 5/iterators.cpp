//Iterate meaning hocce loop through kora

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    // string::iterator it;
    cin>>s;
    // s.begin hocce private data 
    // cout<<*s.begin()<<endl; 

    //last er value dekar jnno
    // cout<<*(s.end()-1)<<endl;

    //Pointer die loop through korte chaile
    //Iterator laage

    //For previous compilers
    // for(it =s.begin(); it<(s.end());it++){
    //     cout<<*it<<endl;
    // }

    // For new compilers they can detect iterators 
    for(auto it =s.begin(); it<(s.end());it++){
        cout<<*it<<endl;
    }

    return 0;
}