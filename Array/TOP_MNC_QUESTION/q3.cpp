//Find the Smallest missing value in the Array
#include<iostream>
using namespace std;
int main(){
    int arr[6],n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    const int N = 1e6 + 2;
    bool check[N];
    for(int i = 0; i < N; i++){
        check[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }
    int ans = -1;
    for(int j = 1; j < N; j++){
        if(check[j] == false){
            ans = j;
            break;
        }
    }
    cout<<ans;

   return 0;
}