#include<bits/stdc++.h>
using namespace std;

//creating namespace
//namespace banabar jnno namespace lagbe
namespace Rakib{
    int age = 24;
    void hello(){
        cout<<"Hello namespace"<<endl;
    };
}
namespace Sakib{
    int age2 = 34;
    void hello2(){
        cout<<"Hello namespace"<<endl;
    };
}

//one way
using namespace Rakib;


int main(){
    cout<<age<<endl;
    //second way
    Sakib::hello2();
    return 0;
}