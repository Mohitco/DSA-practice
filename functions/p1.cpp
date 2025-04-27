#include<iostream>
using namespace std;

//fxn to give power
int pow(int x, int y){
    int ans = 1;
    for(int i = 1; i<=y; i++){
        ans = ans * x;
    }
    return ans;
}

//fxn. for accepting values
int acceptValue(){
    int a, b;
    char ch;
    cout<<"Enter the Number: ";
    cin>>a>>b;
    int answer =  pow(a,b);
   cout<<answer<<endl;
}
int main(){
   char ch;
   int i = 1;
   acceptValue();
   while(i==1){
    cout<<"You want to do it again y/n: ";
    cin>>ch;
    if(ch == 'y'){
       acceptValue();
    }
    else{
        i = 0;
        return 0;
    }
   }
    return 0;
}