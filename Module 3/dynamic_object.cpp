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

// Dynamic object used for memory management 


int main(){
    char name[100] = "Rahim Ullah";
    
    // Dynamic Object creation 
    //new die heap memory create kore
    Student* rahim =  new Student(29,'A',7,name); 

    // Updating value 
    (*rahim).roll = 3; 

    //How to access dynamic object

    // Since address return kore amader value dekbar jnno dereference korte hobe 
 
    // 1 way 
    cout<<(*rahim).name<<endl;
    cout<<(*rahim).roll<<endl;

    //2nd way shortcut(Only can be done for dynamic object)
    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;

    // delete an object 
    delete rahim;
    cout<<rahim->cls<<endl;
    cout<<rahim->name<<endl;




    // int *a = new int;
    // *a = 10;
    // cout<<*a<<endl;
    return 0;
}