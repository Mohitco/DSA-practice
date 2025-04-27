//Painter partition
#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int>arr, int n, int m ,int mid){
    int painterCount = 1;
    int lengthSum = 0;
    for(int i = 0; i < n; i++){
        if(lengthSum + arr[i] <= mid){
        lengthSum += arr[i];
       }
       else{
        painterCount++;
        if(painterCount > m || arr[i] > mid){
            return false;
        }
        lengthSum = arr[i];
       }
    }
    return true;
}


int painterPartition(vector<int>arr, int n, int k){
    int s = 0;
    int sum = 0;
    for(int i =0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s <= e){
        if(ispossible(arr,n,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main(){
    int n,k;
    cout<<"Enter the no. of boards: ";
    cin>>n;
    cout<<"Enter the no. of painters: ";
    cin>>k;
    cout<<"Enter the Length of boards: "<<endl;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    cout<<painterPartition(arr,n,k);
}