//Stringstreamd die print
#include<bits/stdc++.h>
using namespace std;


// & = reference 
void print(stringstream& ss){
    string word;
    if(ss>>word){
        print(ss);
        cout<<word<<endl;
    }
}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}