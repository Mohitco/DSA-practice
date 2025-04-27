#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "abcacbadec";
    int fre[26];
    for(int i = 0; i < 26; i++)
        fre[i] = 0;

    for(int i = 0; i < str.size(); i++)
        fre[str[i] - 'a']++;

    char ans = 'a';
    int maxF = 0;

    for(int i = 0; i < 26; i++){
        if(fre[i] >  maxF){
            maxF = fre[i];
            ans = i + 'a';
        }
    }

cout<< maxF <<" "<< ans <<endl;


  

return 0;
}