#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[5]; //creating heap memory
    for(int i=0; i<5;i++){
        cin>> a[i];
    }
    return a;
}

int main(){
    int *a = fun();
    //before deleting 
    for(int i=0; i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //jodi ar na lage array ta
    delete[] a;

    //printing after deleting
    for(int i=0; i<5;i++){
        cout<<a[i]<<" ";
    }

    //code
    return 0;
}