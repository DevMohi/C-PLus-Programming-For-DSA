#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    int j;
    cin>>j;

    int *b = new int[j];
    for(int i=0; i<n;i++){
        b[i] = a[i];
    }
    for(int i=n; i<j;i++){
        cin>>b[i];
    }

    for(int i=0; i<j;i++){
        cout<<b[i]<<" ";
    }

    cout<<endl;

    //delete array a

    delete[] a;

    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}