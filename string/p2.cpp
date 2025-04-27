//Operations performed on string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    string str = "Aadarsh";
    cin>>s1>>s2;

    s1.append(s2); //method used to add s1 and s2
    cout<<s1<<endl;

   string s3,s4;
   cin>>s3>>s4;
   cout<<"s1 + s2 = "<<s3+s4<<endl;
   
   //Access any particular character

   cout<<str[5];

   return 0;

}