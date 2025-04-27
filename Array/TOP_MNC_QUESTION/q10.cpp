//Matrix search
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size: ";
    cin>>n>>m;
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    int arr[4][4] = {{2,4,9,10},{3,5,20,30},{5,6,20,35},{8,9,22,38}};
    bool found = false;
    for(int i = n-1, j = 0; i >=0 && j < m;){
            if(arr[i][j] == target){
                cout<<"Element found on index"<<i<<","<<j<<endl;
                found = true;
                i--;
            }
            else if(arr[i][j] > target){
                i--;
            }
            else{
                j++;
            }
    }
     if(found){
            cout<<"Found the Element "<<target;
        }
        else{
            cout<<"Not found!";
        }
    return 0;
}
