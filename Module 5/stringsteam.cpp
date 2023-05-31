#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    //Word by word ber kore strinstream
    stringstream ss(s);
    ss<<s;
    string word;
    int cnt = 0;
    //ss theke word e jacce
    while(ss >> word){
        cout<<word<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}