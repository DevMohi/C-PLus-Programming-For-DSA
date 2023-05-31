//Function inside class
#include<bits/stdc++.h>
using namespace std;

class Person {
    public: 
        string name;
        int age;
        Person(string name,int age){
    
            this->name = name;
            this->age = age;
        };
   

};

int main(){
    Person *rakib = new Person("rakib Ahasan",23);
    Person *sakib = new Person("sakib Ahasan",23);

    // rakib = sakib //aita kaaj korbena 

    //aita kore hoce sakib er value gulo rakib nie felbe and jodi jeikono ekta delete kori dunota delete hobe
    // delete sakib;

    // correct way way 1
    rakib->name  = sakib->name;
    rakib->age  = sakib->age;

    //easier way 2
    *rakib = *sakib;

    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}