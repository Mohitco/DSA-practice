#include<iostream>
using namespace std;

// Only applicable on sorted array

int binarySearch(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    while(s <= e){
        int mid = (s + e) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
             e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    return 0;

}

int main(){
    int arr[5],key;
    cout<<"Enter the 5 Values of Array: "<<endl;
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value you want to found: ";
    cin>>key;

    int result = binarySearch(arr,5,key);

    if(result != 0){
        cout<<"Element found on index no. : "<<result;
    }
    else{
        cout<<"Not found! ";
    }
}