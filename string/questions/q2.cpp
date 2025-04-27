#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
//USe inbuilt method transform() to convert upper to lower case

    string str = "Aadarsh";
     
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout<<str<<endl;



    return 0;
}

/* Basic way to convet upper tp lower case*/

//   string lower,upper;
//     cin>>lower>>upper;
// //Convert to uppercase
//     for(int i = 0; i < lower.size(); i++){
//         if(lower[i] >= 'a' && lower[i] <= 'z'){
//             lower[i] -= 32;
//         }
//     }
//     cout<<"uppercase : "<<lower<<endl;
// //Convert to lowercase
//     for(int i = 0; i < upper.size(); i++){
//         if(upper[i] >= 'A' && upper[i] <= 'Z'){
//             upper[i] += 32;
//         }
//     }
//     cout<<"Lowercase : "<<upper<<endl;