#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;  //stores the address of a variable
    int **q = &p; //stores the address of p pointer
    cout<<*q<<endl;
    cout<<a<<endl;
    **q = 2000;
    cout<<*q<<endl;
    cout<<*p<<endl;
    cout<<a<<endl;
}