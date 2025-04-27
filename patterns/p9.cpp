#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + i + j - 2;
            cout<<ch;
            j += 1;
            count++;
        }
        cout<<endl;
        i++;
    }
}