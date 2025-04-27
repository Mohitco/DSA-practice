#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int key){
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while(s <= e){
     if(arr[mid] == key){
        ans = mid;
        e = mid-1;
     }
     else if(arr[mid] < key){
        s = mid +1;
     }
     else if( arr[mid] > key){
        e = mid - 1;
     }
     mid = s + (e - s) / 2;
  }
  return ans;
}

int lastoccurence(int arr[],int n,int key){
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while(s <= e){
     if(arr[mid] == key){
        ans = mid;
        s = mid + 1;
     }
     else if(arr[mid] < key){
        s = mid +1;
     }
     else if( arr[mid] > key){
        e = mid - 1;
     }
     mid = s + (e - s) / 2;
  }
  return ans;
}

int main(){
  int n,key;
  cin>>n;
  int arr[7] = {1,2,3,3,5,3,3};
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cin>>key;

  cout<<"First occurrence index on "<<firstoccurence(arr,n,key)<<endl;
  cout<<"Last occurrence index on "<<lastoccurence(arr,n,key)<<endl;


}