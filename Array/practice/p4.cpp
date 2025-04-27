#include<iostream>
using namespace std;

int reverseArray(int arr[] , int size){
    for(int i = 0; i < size/2; ++i){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
   
}

void printArray(int arr[], int n){
   for(int i = 0; i < n; i++){
    cout<<arr[i];
   }
}

int main(){
   int arr[5];
   cout<<"Enter the array: ";
   for(int i = 0; i < 5; i++){
       cin>>arr[i];
   }
   cout<<"Original Array"<<endl;
   printArray(arr,5);
   cout<<endl;
   reverseArray(arr,5);
   cout<<"Reversed Array"<<endl;
   printArray(arr,5);
}