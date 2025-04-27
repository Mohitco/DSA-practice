#include <iostream>
using namespace std;

int main() {
   int n ;
   cin>>n;
   int count = 1;
   for(int i = 1; i <= n; i++){
      for(int j = 0; j < i; j++) {
          cout<<" * ";
      }
      for(int s = 0; s < (2*n)-(2*i); s++) {
          cout<<"   ";
      }
      for(int j = 0; j < i; j++) {
          cout<<" * ";
      }
      cout<<endl;
   }
   
   //reverse 
   for(int i = n; i >= 1; i--){
      for(int j = 0; j < i; j++) {
          cout<<" * ";
      }
      for(int s = 0; s < 2*n-2*i; s++) {
          cout<<"   ";
      }
      for(int j = 0; j < i; j++) {
          cout<<" * ";
      }
      cout<<endl;
   }

    return 0;
}