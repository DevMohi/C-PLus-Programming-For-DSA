//Practice Problem 1

// #include<bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//         char name [100];
//         int roll;
//         char section; 
//         int math_marks;
//         int cls; 

//     //Setting constructor

//     Student(int r, char s, int marks , int c, char *n){
//         roll = r;
//         section = s;
//         math_marks = marks;
//         cls = c;
//         strcpy(name,n);
//     }
// };


// int main(){
//     Student rahim(29, 'A', 195, 7,  "Rahim Bhai");

//     Student raiyan(1,'B',100, 11,
//     "Raiyan Das");

//     Student cranzit(3,'C',105,5,"Cranzit das");



//     if(rahim.math_marks > raiyan.math_marks && rahim.math_marks > cranzit.math_marks){
//         cout<<"Rahim is the highest scoring";
//     }
//     else if(raiyan.math_marks > rahim.math_marks && raiyan.math_marks > cranzit.math_marks){
//         cout<<"Raiyan is the highest scoring";
//     }
//     else{
//         cout<<"Cranzit scored highest";
//     }

    
//     return 0;
// }


//Practice problem  2


#include<bits/stdc++.h>
using namespace std;

class Cricketer {
    public: 
        int jersey_no;
        char country[100];
};

int main(){
    //New dynamic object
    Cricketer* dhoni = new Cricketer;
    
    dhoni->jersey_no = 7; 
    char nm[100] = "India";
    strcpy(dhoni->country,nm);

    Cricketer* kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country,dhoni->country);

    delete dhoni;


    cout << "Jersey No: " << kohli->jersey_no << endl;
    cout << "Country: " << kohli->country << endl;
    

  
    return 0;
}