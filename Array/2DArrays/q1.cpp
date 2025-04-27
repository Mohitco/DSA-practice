//Seaching an element 
#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cout<<"Enter the row and column values: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the Arrays Value: "<<endl;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin>>arr[i][j];
      }
   }
   cout<<"Enter the value you want to found: ";
   cin>>x;
   bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == x){
                cout<<"Found on index "<<"row "<<i<<" col "<<j<<" = "<<x<<endl;
                found = true;
            }
        }
    }
    if(found){
     cout<<"Element found";
    }
    cout<<"not found!";
}