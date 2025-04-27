#include<iostream>
using namespace std;

int getBit(int n, int pos){
      return ((n & (1<<pos)) != 0);
}
int setBit(int n, int pos){
      return (n | (1<<pos));
}
int clearBit(int n, int pos){
      
      return (n & ( ~(1<<pos)));
}
int updateBit(int n, int pos, int val){
      int mask = ~(1<<pos);
      n = n & mask;
      return (n | (val<<pos));
}

int main(){
    int n,pos;
    cin>>n>>pos;

    cout<<getBit(n,pos)<<endl;

    cout<<setBit(n,pos)<<endl;

    cout<<clearBit(n,pos)<<endl;

    cout<<updateBit(n,pos,1)<<endl;

}