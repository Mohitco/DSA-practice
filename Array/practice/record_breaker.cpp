#include<iostream>
#include<algorithm>
using namespace std;

void recordBreakingDay(int arr[], int size){
    int ans = 0;
    int mx = -1;

    for(int i = 0; i < size; i++){
          if(arr[i] > mx && arr[i] > arr[i+1]){
            ans ++;
          }
          mx = max(mx, arr[i]);
          
    }
    cout<<ans<<" "<< mx;
}

int main(){
    int arr[8];
    int n;
    cin>>n;
    cout<<"Enter the 8 values of Array :"<<endl;
    for(int i = 0; i < 8; i++){
        cin>>arr[i];
    }

    recordBreakingDay(arr,8);
}