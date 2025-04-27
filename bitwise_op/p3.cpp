#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 0;
    int temp = 0;
    while(n!=0){
       int bit= n & 1;
       temp = (bit * pow(10, i) ) + temp;
       n = n>>1;
       i++;

    }
    cout<<temp;
}
