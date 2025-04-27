#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
           return i;
        }
    }
    return 0;
    
}


int main(){
  int arr[5],key;
  cout<<"Enter the 5 Array values: "<<endl;
  for(int i = 0; i < 5; i++){
    cin>>arr[i];
  }
  cin>>key;

  int result = linearSearch(arr,5,key);
  if(result){
    cout<<"Element found : "<<result;
  }
  else{
    cout<<"Not found!";
  }
}