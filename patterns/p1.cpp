#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<<"Enter the no. of rows and columns : ";
    cin>>n;
    while(i<=n){
        int j = 1;
      while(j<=n){
        cout<<"*";
        j += 1;
      }
      cout<<endl;
      i++;
}
 }
    