#include<iostream>
using namespace std;
int Plus1(int x); //signature 
double Plus1double(double x);
template <typename T> T Plus1T(T x);
template <typename T1, typename T2, typename T3>   T1 Retangle(T2 a, T3 b){
    return a*b;
}

template <typename T> T Plus1T(T x){
    return x+1 ;
}
template <typename TX> void Print (TX x){
    cout<<x<<endl;
}
int main()
{
    Print<int>(123);
    // cout<<Retangle<double,double,double>(5.2,2.1)<<endl;
    // cout<<Plus1T<int> <<endl;
    return 0;
}

double Plus1double(double x){
    return x+1;
}

 int Plus1(int x){
    return x+1;
}
