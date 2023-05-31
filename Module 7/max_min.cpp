//Max from objects
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    Student a[3];
    for(int i =0; i<3; i++){
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        //aita use kore coz geline enter ne
        cin.ignore();
    }
    //
    Student mx;
    mx.marks = INT_MIN;

    for(int i=0; i<3;i++){
        if(a[i].marks>mx.marks){
            //Dunota static copy hoie jai
            mx = a[i];
        }
    }
    //Returns the highest value
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    Student mn;
    mn.marks = INT_MAX;

    for(int i=0; i<3;i++){
        if(a[i].marks<mn.marks){
            mn = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks;

    return 0;
}