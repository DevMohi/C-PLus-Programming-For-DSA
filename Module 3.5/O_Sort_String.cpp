#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a;
    int count[26] = {0};
    for(int i=0; i<n;i++){
        cin>>a;
        count[a-'a']++;
    }
    

    for(int i=0; i<26; i++){
        while(count[i] != 0){
            cout<<count[i + 'a'];
            count[i]--;
        }
    }

    return 0;
}