#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
       for(int i = 0; i < size; i++){
          if(arr[i] == key){
            return 1;
          }
       }
        return 0;
}

int main(){
    int arr[8],key;
    cout<<"Enter the 8 Array elements: ";
    for(int i = 0; i < 8; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to found: ";
    cin>>key;
 bool found = search(arr,8,key);
   if(found){
    cout<<"Key is present"<<endl;
   }
   else{
    cout<<"Not Found!"<<endl;
   }
}