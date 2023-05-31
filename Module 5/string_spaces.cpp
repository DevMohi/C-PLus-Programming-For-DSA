#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    //Normally onno value input nite na hoile taile
    //getline enter nibena, but since enter dababo
    //so enter nie nibe, tai ignore() function use korte hobe to avoid enter
    //ignore() kaaj na korle use getchar();
    cin.ignore();

    string s;
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
}