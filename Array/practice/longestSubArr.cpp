#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[7],n = 7;
    cout<<"Enter the array values: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    if( n < 2){
        cout<<"Array is to small for Arithmethic subArray"<<endl;
        return 0;
    }
    
    int ans = 0;
    int curr = 2;
    for(int i = 1; i < n-1; i++){
        int pd = arr[i] - arr[i - 1];
        curr = 2;
        for(int j = 2; j < n; j++){
           if(pd == arr[j] - arr[j - 1]){
            curr++;
           }
           else{
            break;
           }
           ans = max(ans,curr);
        }
    }
    cout<<"Largest Airthmethic subarray is:  "<<ans;
    return 0;
}