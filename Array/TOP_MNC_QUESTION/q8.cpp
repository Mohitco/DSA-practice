//Transpose the 2D Array
#include<iostream>
using namespace std;

void transposeArray(int arr[3][3],int n, int m){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < m; j++){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<"After transpose The Array: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           cout<<arr[i][j];
        }
        cout<<endl;
    }
}
   

int main(){
    int n,m;
    cout<<"Enter the Row and Column value: ";
    cin>>n>>m;
    int arr[3][3];
    cout<<"Enter the Array: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    transposeArray(arr,n,m);
    return 0;
}