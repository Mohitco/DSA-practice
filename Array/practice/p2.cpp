#include<iostream>
using namespace std;
int arraySum(int arr[], int size){
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }
  return sum;
}

int main(){
    int size;
    int arr[10];
    cout<<"Enter the size: ";
    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int Result = arraySum(arr,size);
    cout<<"Sum of Array Element is: "<<Result;
}