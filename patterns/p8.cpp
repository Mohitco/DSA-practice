#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cin>>n;
    while(i<=n){
        int j = 1;
        char ch = 'A';
        while(j<=n){
            // char ch = 'A' + j -1;
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
}

// writing pattern ABC BCD CDE

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = i+j -1+'A'-1;
            cout<<ch;
            j += 1;
            ch++;
        }
        // ch = ch-2;
        cout<<endl;
        i++;
    }
}
*/