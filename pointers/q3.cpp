#include<iostream>
using namespace std; 
int main(){
    int a = 32;
    //Assign address of a to pointer ptr
    int*ptr = &a;
    char ch = 'A';
    //Assign address of ch to pointer cho
    char *cho = &ch;

    //Perform airthmetic opertion on pointer
    *cho += a;
    *ptr += ch;

    cout<<a<<" "<<ch<<endl;

    return 0;
}