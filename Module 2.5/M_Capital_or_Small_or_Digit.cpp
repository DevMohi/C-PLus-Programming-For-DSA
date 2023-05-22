#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char c;
    cin >> c;

    //For digits

    if(c>='0' && c<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    else if(c>='a' && c<='z'){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else if(c>='A' && c<='Z'){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }

    return 0;
}