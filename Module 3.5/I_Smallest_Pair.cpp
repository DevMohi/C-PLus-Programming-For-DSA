#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i =0;i<t; i++){
        int n;
        cin>>n;
        int ar[n];

        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        int mn = INT_MAX;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int val = ar[i]+ar[j]+(j+1)-(i+1);
                mn = min(mn,val);
            }
        }
        
        cout<<mn<<endl;
    }

    return 0;
}