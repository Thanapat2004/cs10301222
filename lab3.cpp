#include<iostream>
using namespace std;
int main(){
    /*0 = 0
    1 = 1
    2 = 10
    3 = 11
    4 = 100*/
    int a=103;
    if(a & 1)         //((a%2)==1)
        cout<<"Ood"<<endl;
    else
        cout<<"Event"<<endl;

    return 0;
}