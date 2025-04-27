#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        int Array_sum = 0;
        for(int j = i; j < n; j++){
            Array_sum += arr[j];
            cout<<Array_sum<<" ";
        }
        cout<<endl;
    }
}