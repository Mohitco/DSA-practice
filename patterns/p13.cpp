#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No.of rows: ";
    cin>>n;
    for(int i = 0; i <= n; i++){
        //space
        for(int j = 0; j < i; j++){
            cout<<"   ";
        }
        //star
        for(int s = 0; s < 2+(n-2*i); s++){
            cout<<" * ";
        }
        //space
        for(int j = 0; j < i; j++){
            cout<<"   ";
        }
        cout<<endl;
    }
}