// find maximum sum of circular subArray
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        currsum += arr[i];
        if(currsum < 0){
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

void maxsumOfCircularArr(int arr[], int n){
    int wrapsum;
    int non_wrapsum;  

    non_wrapsum = kadane(arr,n);
    int totalsum = 0;
    for(int i = 0; i < n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr,n);

    cout<<max(wrapsum, non_wrapsum);
      
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[7];
    cout<<"Enter the Arrays Value: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    maxsumOfCircularArr(arr,n);
}