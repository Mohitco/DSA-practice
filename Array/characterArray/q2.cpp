//Largest word in the sentence
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    cin.ignore();
    char arr[10+1];
    cin.getline(arr,n);
    int i = 0, currLen = 0, maxLen = 0,st = 0, maxst = 0;
    while(1){
       if(arr[i] == ' ' || arr[i] == '\0'){
        if(currLen > maxLen){
            maxLen = currLen;
            maxst = st;
        }
        currLen = 0;
        st = i+1;
       }
       else
        currLen++; 
        if(arr[i] == '\0')
           break;
        i++;
    }
    cout<<maxLen<<" ";
    for(int i = 0; i < maxLen; i++){
        cout<<arr[i+maxst];
    }
    return 0;
}
