//Find the subArray sum to match the key value or not 
#include<iostream>
using namespace std;
int main(){
    int arr[5],n,key;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the Array value: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key value: ";
    cin>>key;

bool found = false;

    for(int i = 0; i < n; i++){
        int sum = 0;

       for(int j = i; j < n; j++){
        sum += arr[j];
         if(sum == key){
          cout<< "found "<< key <<" from index "<<i<<" to "<<j<<endl;
          found = true;
        }
        else if(sum > key){
           break;
        }
       }
    }
    if(!found){
       cout<<"No subArray found with sum to match key value";
    }

    return 0;
}