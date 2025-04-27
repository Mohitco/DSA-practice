//Multiplication of matrix
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    int arr1[3][4],arr2[4][3];
    cout<<"Enter the size of matrix: ";
    cin>>n1>>n2>>n3;
    cout<<"Enter the value of first matrix with rows "<<n1<<" col "<<n2<<" : "<<endl;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++)
        cin>>arr1[i][j];
    }
    cout<<"Enter the value of first matrix with rows "<<n2<<" col "<<n3<<" : "<<endl;
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n3; j++)
        cin>>arr2[i][j];
    }
    int ans[3][3] = {0};
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            for(int k = 0; k < n2; k++)
           ans[i][j] += arr1[i][k] * arr2[k][j];
         }
    }
cout<<"Multiplication Matrix: "<<endl;
     for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++)
           cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;

}