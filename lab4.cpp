#include<iostream>
using namespace std;
int main (){
int a=10;
//a -=4; //a=a-4;
//a +=2;  //a=a+2;



 cout<<a<<endl;
string ans= ( a%2)?"odd":"event";
//if(a%2){ans="odd";}else{ans="event";} 
cout<<ans<<endl;
    return 0;
}