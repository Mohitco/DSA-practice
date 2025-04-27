#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "423569";

    sort(str.begin(), str.end(), greater<int>());

    // for(int i = 0; i < str.size(); i++){
    //     int temp;
    //    for(int j = 0; j < str.size(); j++){
    //      if(str[j] < str[j+1]){
    //         temp = str[j];
    //         str[j] = str[j+1];
    //         str[j+1] = temp;
    //     }
    //    }
    // }

    cout<<str;
}