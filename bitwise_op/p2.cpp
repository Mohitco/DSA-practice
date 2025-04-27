#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first no. : ";
    cin>>a;
    cout<<"Enter the second no. : ";
    cin>>b;
    cout<<"Left shift a<<b = "<<(a<<b)<<endl; // Left shift
    cout<<"Right shift a>>b = "<<(a>>b)<<endl;  // Right shift

    cout<<"Left shift a<<b = "<<(17<<2)<<endl; // Left shift
    cout<<"Right shift a>>b = "<<(17>>2)<<endl;  // Right shift
}