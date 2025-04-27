//operation perform on string 
#include<iostream>
#include<string>
using namespace std;
int main(){
// use substr() method to find sub string of string
    string str = "Friends Forever";

    cout<<str.substr(5,10)<<endl;

//use Stoi() to convert numeric string to integer value
    string str1 = "8847";
    
    int x = stoi(str1);

    cout<<x + 2<<endl;

//use to_string() method to convert integer to string;
    int x1 = 8847;

    cout<<to_string(x1) + "2"<<endl;







   return 0;

}