//Sprial order printing
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the Arrays value: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int rowstart = 0; int colstart = 0; int rowend = n - 1; int colend = m - 1;
    while(rowstart <= rowend && colstart <= colend){
        //row start
        for(int col = colstart; col <=colend; col++){
            cout<<arr[rowstart][col]<<" ";
        }
        rowstart++;

        //column end
        for(int row = rowstart; row <= rowend; row++){
            cout<<arr[row][colend]<<" ";
        }
        colend--;

        //row end
        for(int col = colend; col>=colstart; col--){
            cout<<arr[rowend][col]<<" ";
        }
        rowend--;

        //col start
        for(int row = rowend; row>= rowstart; row--){
            cout<<arr[row][colstart]<<" ";
        }
        colstart++;
    }
return 0; 
}