#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5];
    cout<<"Enter 5 Array Value: "<<endl;
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    cout<<"After sorting: "<<endl;
    selectionSort(arr,5);


}