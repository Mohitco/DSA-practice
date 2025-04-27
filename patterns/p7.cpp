#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<ch;
            j += 1;
        }
        cout<<endl;
        ch++;
        i++;
    }
}


// Another logic 

/*
char ch = 'A'+ row - 1
int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<ch;
            j += 1;
        }
        cout<<endl;
        i++;
    }
*/