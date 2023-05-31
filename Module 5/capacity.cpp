#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello World";
    //returns the length size()
    cout<<s.size()<<endl;

    //Amr machine aitar jnno koto max size allocate korte parbe
    cout<<s.max_size()<<endl;

    //shows the capacity of a string , ar ai capacity max_size theke beshi hobena
    cout<<s.capacity()<<endl;


    //clear() -> This clears the string
    // s.clear();
    // cout<<s<<endl;


    //aita check kore string khali naki na or
    //length 0 naki
    //khali hoile true ar nahole false;
    if(s.empty() == true){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }

    //resize() = size baratie ba komate paro
    string z;
    cin>>z;
    z.resize(5);
    cout<<z<<endl;

    return 0;
}