/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int i = n;
  while(i>=1){
      int start = 1;
      while(start<=i){
          cout<<start;
          start++;
      }
       int spaces = 2 * (n - i);
        while (spaces > 0) {
            cout << "*";
            spaces--;
        }
      int end = i;
      while(end>=1){
          cout<<end;
          end--;
      }cout<<endl;
      i--;
  }
    return 0;
}

/*
for(int i = n; i >= 1; i--){
     for(int j = 1; j <= i; j++){
         cout<<j;
     }
     for(int a = 2*(n-i); a>0; a--){
         cout<<"*";
     }
     
     for(int k = i; k >= 1; k--){
         cout<<k;
     }
     cout<<endl;
*/