#include<iostream>
using namespace std;

// Get next ap
int ap(int n){
    int ans;
    ans = 3*n+7;
    return ans;
}


//Find total no. of bit 

int countBit(int n){
     int bit = 0;
    while(n>0){
        bit += n&1;
        n = n >> 1;
    }
    return bit;
}

int totalSetBit(int x, int y){
    int first = countBit(x);
    int second = countBit(y);
    return first + second;
}

//Get the given no. fibbonacci value
void fibo(int n){
    int a = 0, b = 1;
    for(int i = 0; i < n; i++){
       int temp = a + b;
       b = a;
       a = temp;
    }
      cout<<b;
    
}

int main(){
    int a,b;
    cout<<"Enter the  No. : ";
    cin>>a;
    cin>>b;

    // cout<<ap(a);

    cout<<"Total set of Bits: "<<totalSetBit(a,b);

    // fibo(a);

}