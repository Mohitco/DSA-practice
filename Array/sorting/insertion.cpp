#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
   for(int i = 0; i < size; i++){
    int current = arr[i];
    for(int j = i - 1; j >= 0; j--){
           if(arr[j] > current){
              arr[j + 1] = arr[j];
              arr[j] = current;
           }
           else{
              break;
           }
    }
   }
    for(int i = 0; i < size; i++){
      cout<<arr[i]<<" ";
   }
}


int main(){
   int arr[5];
   cout<<"Enter the Array's Value: "<<endl;
   for(int i = 0; i < 5; i++){
      cin>>arr[i];
   }
   insertionSort(arr,5);
   return 0;
}