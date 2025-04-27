#include<iostream>
#include<algorithm> // --> using inbuilt methods like sort,swap and many more...
using namespace std;

int alternateReverseArray(int arr[], int size){
       for(int i = 0; i < size; i+=2){

      //  swap(arr[i],arr[i+1]);  // --> In built method to swap a value

        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
       }  
}

void printArray(int arr[], int n){
   for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
   }
}

int main(){
   int arr[6];
   cout<<"Enter  6 Arrays: "<<endl;
   for(int i = 0; i < 6; i++){
     cin>>arr[i];
   }
   alternateReverseArray(arr,6);
   printArray(arr,6);
}