#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 ...... N
int main(){
   int n,a=0,b=1;
   cin>>n;
   while(a<=n){
    int temp;
    cout<<a;
    temp = a + b;
    b = a;
    a = temp;
   
   }
}