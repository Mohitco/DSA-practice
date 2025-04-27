//How to use pointer in functions
#include<iostream>
using namespace std;

void swap(int a, int b){  //It create another varible a and b to store the original value copy so can't the original value 
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 2;
    int b = 3;

  /*
  we use without initalized the ptr, we pass the adrress int the function also 
    int *aptr = &a;
    int *bptr = &b;
 */

    cout<<"Original values of a and b: "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    cout<<"Use swap funtion without pointer: "<<endl;
    swap(a,b); 
    cout<<"a = "<<a<<" "<<"b = "<<b<<" "<<endl; 

    cout<<"Use swap funtion with pointer: "<<endl;
    // swap(aptr,bptr);
    swap(&a,&b);
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl; 

    return 0;
}