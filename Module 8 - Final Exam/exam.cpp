// // // // replace it 

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++) {
//         string s, x;
//         cin >> s >> x;

//         int xLength = x.size();
//         int n = 0;

//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == x[n]) {
//                 n++;
//                 if (n == xLength) {
//                     int pos = i - n + 1;
//                     s.replace(pos, x.size(), "$");
//                     n = 0;
//                 }
//             } 
//             else {
//                 n = 0; 
//             }
//         }
//         cout <<s<< endl;
//     }
//     return 0;
// }





// // // replace it 

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s, x;
        cin >> s >> x;
        //meaning find jotokkon pabe search korbe

        while(s.find(x)!=-1){
            s.replace(s.find(x),x.size(),"$");
        }
        cout<<s<<endl;
    }

    return 0;
}


// //Find Ratul

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     string s;
// //     getline(cin,s);
// //     stringstream ss(s);
// //     string word;
// //     int flag = 0;
// //     while(ss >> word){
// //         if(word == "Ratul"){
// //             flag = 1;
// //         }
// //     }

// //     if(flag == 1){
// //         cout<<"YES";
// //     }
// //     else{
// //         cout<<"NO";
// //     }

// //     return 0;
// // }


// //Get Reverse

// // #include<bits/stdc++.h>
// // using namespace std;


// // class Student{
// //     public: 
// //         string name;
// //         int cls;
// //         char section;
// //         int math_marks;
// //         int eng_marks;
// // };

// // int main(){
// //     int n;
// //     cin>>n;

// //     //Array of objects
// //     Student arr[n];

// //     for(int i=0; i<n; i++){
// //         cin>>arr[i].name;
// //         cin>>arr[i].cls;
// //         cin>>arr[i].section;
// //         cin>>arr[i].math_marks;
// //         cin>>arr[i].eng_marks;
// //     }

// //     //reversing
// //     for(int i=0, j=n-1; i<j; i++,j--){
// //         // cout<<i<<" "<<j<<endl;
// //         //reversing
// //         Student temp =  arr[i];
// //         arr[i] = arr[j];
// //         arr[j] = temp;
// //     }

// //     for(int i=0; i<n; i++){
// //         cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl; 
// //     }
// //     return 0;
// // }


// //Get Reverse 2

// // #include<bits/stdc++.h>
// // using namespace std;


// // class Student{
// //     public: 
// //         string name;
// //         int cls;
// //         char section;
// //         int id;
// // };

// // int main(){
// //     int n;
// //     cin>>n;

// //     //Array of objects
// //     Student arr[n];

// //     for(int i=0; i<n; i++){
// //         cin>>arr[i].name;
// //         cin>>arr[i].cls;
// //         cin>>arr[i].section;
// //         cin>>arr[i].id;
// //     }

// //     //reversing
// //     for(int i=0, j=n-1; i<j; i++,j--){
// //         // cout<<i<<" "<<j<<endl;
// //         //reversing

// //         int temp =  arr[i].id;
// //         arr[i].id = arr[j].id;
// //         arr[j].id = temp;
// //     }

// //     for(int i=0; i<n; i++){
// //         cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<endl; 
// //     }
// //     return 0;
// // }

// //Sort it

// #include<bits/stdc++.h>
// using namespace std;


// class Student{
//     public: 
//         string name;
//         int cls;
//         char section;
//         int id;
//         int math_marks;
//         int eng_marks;
// };

// bool cmp (Student a, Student b){
//     int total_marks = a.eng_marks + a.math_marks;
//     int total_marks_b = b.eng_marks + b.math_marks;
    
//     if(total_marks > total_marks_b){
//         return true;
        
//     }
//     else if(total_marks == total_marks_b){
//         if(a.id<b.id){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     //Array of objects
//     Student arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i].name;
//         cin>>arr[i].cls;
//         cin>>arr[i].section;
//         cin>>arr[i].id;
//         cin>>arr[i].math_marks;
//         cin>>arr[i].eng_marks;
//     }

//     sort(arr,arr+n,cmp);

//     for(int i=0; i<n; i++){
//         cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl; 
//     }
//     return 0;
// }