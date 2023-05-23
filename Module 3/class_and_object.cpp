#include<bits/stdc++.h>
using namespace std;

//Main er bahire class declare kore

//Initializing class
class Student{
    public: 
        char name[100];
        int roll; 
        int cls;
        char section;


}; //semicolon na dile error dibe

int main(){
    Student rahim;
    rahim.roll = 29;
    rahim.cls = 9;
    rahim.section = 'A';

    //directly aibave string set kora jabena
    // s.name = "Rahim"; 

    //To assing it
    char nm[100] = "Rahim Uddin";
    //You need to copy it.
    strcpy(rahim.name,nm);


    //Second object
    Student kahim;
    kahim.roll = 3;
    kahim.cls = 2;
    kahim.section = 'B';

    //directly aibave string set kora jabena
    // s.name = "Rahim"; 

    //To assing it
    char nm2[100] = "Karim Solaimon";
    //You need to copy it.
    strcpy(kahim.name,nm2);

    //To print
    cout<<rahim.name<<endl;
    cout<<kahim.name;

    return 0;
}