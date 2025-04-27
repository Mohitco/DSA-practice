#include<iostream>
#include<algorithm> //--> Add for used sorting method
using namespace std;

int duplicateArrayElements(int arr[],int size){
    sort(arr, arr + size);  // ---> In built sorting method to sort element
     for(int i = 0; i < size; i++){
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<" ";
        }
     }
}

void printArray(int arr[], int n){
   for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
   }
}

int main(){
    int arr[9] = {5,4,2,1,2,4,3,8,3};
    cout<<"Array"<<endl;
    printArray(arr,9);
    cout<<endl;
    cout<<"Printing duplicate elements in the array: ";
    duplicateArrayElements(arr,9);
    cout<<endl;
    cout<<"After sorting elements: "<<endl;
    printArray(arr,9);

}