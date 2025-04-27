//Allocate Aggressive cows to stall
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int> &arr,int k, int mid){
    int cowCount = 1;
    int lastpos = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] - lastpos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastpos = arr[i];
        } 
    }
    return false;
}

int stallallocate(vector<int> &arr, int c){
    sort(arr.begin(), arr.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < arr.size(); i++){
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(ispossible(arr,c,mid)){
            ans = mid;
            s = mid + 1;

        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int c,n;
    cout<<"Enter the no. of Cows: ";
    cin>>c;
    cout<<"Enter the no. of staals : ";
    cin>>n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    cout<<stallallocate(arr,c);
}