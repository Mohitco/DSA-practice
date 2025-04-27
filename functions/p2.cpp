#include<iostream>
using namespace std;

//Factorial funtion
int fact(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}
//function for NCR formula
int nCr (int n, int r){
    int num = fact (n);
    int demo = fact(r) * fact(n-r);
    return num/demo;
}

int main(){
    int n, r;
    cout<<"Enter the values: ";
    cin>>n>>r;
    int answer = nCr(n,r);
    cout<<"Answer is = "<<answer;
    
    return 0;
}