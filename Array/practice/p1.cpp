#include<iostream>
#include<climits> //   ---> This header file used for INT_MAX and INT_MIN
using namespace std;

int getMAx(int arr[], int n){
    int maxi = INT_MIN ;
    for(int i = 0; i < n; i++){

        // maxi = max(maxi,arr[i]);  ---> It is a pre-defined function to find max value

        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int getMin(int arr[], int n){
int mini = INT_MAX ;
    for(int i = 0; i < n; i++){
       
    // mini = min(mini,arr[i]);  ---> It is a pre-defined function to find min value

        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}


int main(){
    int size;
    cin>>size;
    int arr[9];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
   cout<<" Max value in the array is "<<getMAx(arr,size)<<endl;
   cout<<" Min value in the array is "<< getMin(arr,size)<<endl;

   cout<<sizeof(arr)/sizeof(int); // get the length of array
}