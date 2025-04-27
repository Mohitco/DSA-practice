#include<iostream>
using namespace std;

int uniqueArray(int arr[], int size){
    int unique = 0;
    for(int i = 0; i < size; ++i){
        unique ^= arr[i];
    }
    return unique;
}

void printArray(int arr[], int n){
   for(int i = 0; i < n; i++){
    cout<<arr[i];
   }
}

int main(){
    int arr[9] = {8,5,2,4,2,4,5,6,8};
   cout<<"Original Array:"<<endl;
   printArray(arr,9);
   cout<<endl;
   cout<<"This is the unique element: "<<uniqueArray(arr,9);

}