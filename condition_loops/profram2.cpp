#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int sum = 0;
    int n, Even=0,odd=0;
    cout<<"Enter the range: ";
    cin>>n;
    while(i<=n){
        cout<< i <<endl;
        if(i%2==0){
        Even += i;
        }
        if(i%2!=0){
        odd += i;
        }
        sum += i;
         i++;
    }
    cout<<"Sum of all the integer: "<<sum <<endl;
    cout<<"Sum of all the Even integer: "<<Even <<endl;
    cout<<"Sum of all the Even integer: "<<odd <<endl;
}