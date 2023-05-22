#include<bits/stdc++.h>
using namespace std;

int main(){
    //heap memory theke stack memory tah patabe
    int *a = new int[5];
    for(int i=0; i<5;i++){
        cin>>a[i];
    }
    for(int i=0; i<5;i++){
        cout<<a[i]<<" ";
    }

    //delete
    delete a;


    return 0;
}