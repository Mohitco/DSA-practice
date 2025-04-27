//Find the pair which sum is equal to key value
#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int key){
    int low = 0;
    int heigh = n-1;
    for(int i = 0; i < n; i++){
        if(arr[low] + arr[heigh] == key){
            cout<<arr[low] << " + " <<arr[heigh]<<" = "<<key<<endl;
            return true;
        }
        else if(arr[low] + arr[heigh] > key){
            heigh--;
        }
        else{
            low++;
        }
    } 
    return false;
}

int main(){
    int arr[8],n,key;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<"Enter the Arrays value: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
   int result = pairsum(arr,n,key);
   if(result){
    cout<<"Found the pair ";
   }
   else{
    cout<<"Not found!";
   }
}