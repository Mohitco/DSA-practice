//Find the sqrt of any no.
#include<iostream>
using namespace std;

float sqrt(int n){
    float s = 0; 
    float e = n;
    float mid = s + (e - s) / 2;
    while(e - s >= 0.0001){
        float square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square > n){
            e = mid;
        }
        else{
            s = mid;
        }
        mid = s + (e - s) / 2;
    }
    return (s+e)/2;
}

int main(){
    float n;
    cout<<"Enter the no.";
    cin>>n;

    cout<<"Square root of "<<n <<" is "<<(sqrt(n))<<endl;



}