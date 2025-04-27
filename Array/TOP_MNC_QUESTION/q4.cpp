//Print all SubArrays of given array
#include<iostream>
using namespace std;

void allSubArraysPrint(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<"SubArray: "<<endl;
        for(int j = i; j < n; j++){
           for(int k = i; k <= j; k++){
            cout<<arr[k];
           }
           cout<<endl;
        }
    }
}
int main(){
    int arr[4];
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the arrays value: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    allSubArraysPrint(arr,n);
}