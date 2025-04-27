#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Aadarsh Kumar   Jha";
    cout<<str<<endl;

    //Use erase method to delete element from the string

    str.erase(14,5);
    cout<<str<<endl;

    //Use find methos to find the charaters

    cout<<str.find("Kumar")<<endl;

    //use insert method to insert element int the given string

    str.insert(14,"Bhardwaj");
    cout<<str<<endl;

    //use length methos to find length of string
    for(int i = 0; i < str.length(); i++){
        cout<<str[i]<<endl;
    }

    return 0;
}