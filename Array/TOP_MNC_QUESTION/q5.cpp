//Find the largest subArray sum in the given array
#include<iostream>
#include<climits>
using namespace std;
// Brute force approach
void LargeSubArrayssum(int arr[], int n){
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
           for(int k = i; k <= j; k++){
               sum += arr[k];
           }
           maxsum = max(maxsum,sum);
        }
    }
    cout<<maxsum;
}

//cumulative optimal approach
void largeSubArraySum(int arr[],int n){
   int currsum[n + 1];
   currsum[0] = 0;
   for(int i = 1; i <= n; i++){
    currsum[i] = currsum[i-1] + arr[i-1]; 
   }
   int maxsum = INT_MIN;
   for(int i = 1; i <= n; i++){
       int sum = 0;
       for(int j = 0; j < n; j++){
        sum = currsum[i] - currsum[j];
        maxsum = max(maxsum, sum);
       }
   }
   cout<<maxsum;
}

//Kadanes's Algorithm one more optimal approach
void kadanesSubArraySum(int arr[], int n){
    int currsum = 0;
    int maxsum = INT_MIN;
  for(int i = 0; i < n; i++){
       currsum += arr[i];
       if(currsum < 0){
        currsum = 0;
       }
       maxsum = max(currsum, maxsum);
  }
  cout<<maxsum;
}

int main(){
    int arr[7];
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the arrays value: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // LargeSubArrayssum(arr,n);
    // largeSubArraySum(arr,n);
    kadanesSubArraySum(arr,n);
}