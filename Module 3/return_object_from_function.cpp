#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
        char name[100];
        int roll; 
        int cls;
        char section;

        //Setting Constructor 
        Student(int r, int s,int c, char* n ){
            roll = r;
            section = s;
            cls = c;
            strcpy(name,n);
        }
}; //semicolon na dile error dibe

Student fun(){
    char name[100] = "Rahim Ullah";
    Student r(29,'C',7, name);
    return r; 
}

int main(){
    Student rahim = fun();

    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
    return 0;
}