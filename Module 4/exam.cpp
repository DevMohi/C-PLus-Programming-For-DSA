// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // To create a dynamic array you need new keyword
//     //The dynamic array will return an address of the first array a[0];
   
//     int *a = new int[5];
//     for(int i=0; i<5;i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<5;i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }


//How to declare an object

// #include<bits/stdc++.h>
// using namespace std;

// //class are declared outside main
// class Student {
//     //need to be public otherwise cannot access
//     public:
//         char name[100];
//         int roll;
//         int cls;
// }; 
// //Make sure to finish with semicolon


// int main(){
//     Student rahim;
//     //setting values to class objects
//     rahim.roll = 29;

//     return 0;
// }


//How to  declare a constructor

// #include<bits/stdc++.h>
// using namespace std;

// //class are declared outside main
// class Student {
//     //need to be public otherwise cannot access
//     public:
//         char name[100];
//         int roll;
//         int cls;

//     // using constructor 
//     Student(int r, int c, char * n){
//         roll = r;
//         cls = c;
//         strcpy(name,n);
//     }

// }; 
// //Make sure to finish with semicolon


// int main(){
//     //Setting values when used a constructor
//     //It simplifies instead of setting it alone
//     Student rahim(9,10,"rahim bhai");
//     // how to access 
//     cout<<rahim.name<<endl;

//     return 0;
// }


// 2c 

// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     public:
//         char name[100];
//         float height;
//         int age;
    
//     //Constructor
//     Person(char *n, float h, int a){
//         strcpy(name,n);
//         height = h;
//         age = a;
//     }
// };


// int main(){
//     //Dynamic object
//     Person* shaks = new Person ("Shakib bhai", 10.5 , 10);

//     //Access object
//     cout<<shaks -> height<<endl;
//     cout<<shaks -> name<<endl;
//     return 0;
// }


// 2d 
// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     public:
//         char name[100];
//         float height;
//         int age;
    
//     //Constructor
//     Person(char *n, float h, int a){
//         strcpy(name,n);
//         height = h;
//         age = a;
//     }
// };


// int main(){
//     //Dynamic object
//     Person* person1 = new Person ("Shakib bhai", 10.5 , 10);
//     Person* person2 = new Person ("Modi bhai", 11.5 , 20);

//     if(person1->age > person2->age){
//         cout<<person1->name<<endl;
//     }
//     else{
//         cout<<person2->name<<endl;
//     }

//     return 0;
// }


//Return object from function
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


// Dynamic Array Size: Dynamic memory allocation allows you to create arrays with a size determined at runtime. For example:

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter array size: ";
//     cin>>size;

//     int *dynamicArray = new int[size];


//     //You can delete the allocated memory in heap to clear memory. 
//     delete dynamicArray;

//     return 0;
// }