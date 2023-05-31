//Function inside class
#include<bits/stdc++.h>
using namespace std;

class Person {
    public: 
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string name,int age){
            //This hocce object er pointer
            this->name = name;
            this->age = age;
        };
        void hello(){
            cout<<name<<" "<<age<<endl;
        }

};

int main(){
    Person rakib("rakib ahasan",23);
    cout<<rakib.name<<" "<< rakib.age<<endl;
    return 0;
}