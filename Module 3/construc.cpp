#include<bits/stdc++.h>
using namespace std;

//Initializing class
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


int main(){
    Student rahim(29, 'A', 7, "Rahim Bhai");

    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
    return 0;
}