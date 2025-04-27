#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int i = 2;
   while(i<n){
    if(n%i==0){
        cout<<"It is not a prime no. for :"<<i<<endl;
        
    }
    else{
        cout<<"It is a Prime no. for :"<<i<<endl;
    }
    i++;
  }
}