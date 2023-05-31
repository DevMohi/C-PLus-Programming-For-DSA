//P Count Words

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);
//     bool inside_word = false;
//     int cnt = 0;

//     for(char c:s){
//         //aita check kore whether alphabets naki
//         //alpha number return kore 
//         if(isalpha(c)){
//             if(inside_word == false){
//                 cnt++;
//             }
//             inside_word = true;

//         }
//         else{
//             inside_word = false;
//         }
//     }
//     cout<<cnt<<endl;

//     return 0;
// }


//Q -> Reverse Word -> Need to complete

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);

//     //Word by word stringstream
//     stringstream ss(s);
//     string word;
//     while(ss >> word){
//         reverse(word.begin(), word.end());
//         cout<<word<<" ";
//     }
//     return 0;
// }




//v -> Replace Words
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int t = s.find("EGYPT");

//     while (t != -1) {
//         s.replace(t, 5, " ");
//         t = s.find("EGYPT", t + 1); // Update t to find the next occurrence
//     }
//     cout << s << endl;

//     return 0;
// }


//A. Lucky

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;


//     for(int i=0; i<n;i++){
//         string s;
//         cin>>s;

//         int digit;
//         int sum1 =0;
//         int sum2 = 0;
//         for(int i=0; i<s.size();i++){
//             if(s[i] >= '0' && s[i] <= '9'){
//                 digit =s[i] - '0'; 
//                 if(i < 3){
//                     sum1 = sum1 + digit;
//                 }  
//                 else{
//                     sum2 = sum2 + digit;
//                 }
//             }
//         }

//         if(sum1 == sum2){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }


//     return 0;
// }


// B - ICPC Ballons 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     for(int i=0; i<t;i++){
//         int n;
//         cin>>n;

//         char a[n];
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//         }
//         //Only uppercase
//         int sum = 0;
//         int count[26] = {0};
//         for(int i=0; i<n; i++){
//             int value = a[i] - 'A';

//             if(count[value] == 0){
//                 sum = sum + 2;
//                 count[value]++; 
//             }
//             else{
//                 sum = sum + 1;
//                 count[value]++;
//             }
//         }

//         cout<<sum<<endl;
//     }

//     return 0;
// }