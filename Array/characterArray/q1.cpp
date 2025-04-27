//check palidrome
#include<iostream>
using namespace std;
int main(){
   int n; cin>>n;
   char arr[5+1];
   cin>>arr;
   bool check = 1;
   for(int i = 0; i < n; i++){
    if(arr[i] != arr[n-1-i]){
        check = 0;
        break;
    }
}
if(check){
    cout<<"It is a palidrome";
}
else{
    cout<<"Its is not a palidrome";
}
    return 0;
}