#include<iostream>
using namespace std;
int main(){
    char a;
    cin.get(a);
    if(a>96 && a<123){    //--> This value's is taken from ASCII Table
        cout<< " This is lowercase:"<< a<<endl;
    }
    else if(a>64 && a<91){
        cout<< " This is Uppercase:"<< a<<endl;
    }
    else if(a>0 && a<9){
        cout<< " This is Numerical"<< a<<endl;
    }
    else if(a==32 || a==64 ){
        cout<< " This is Special charater"<< a<<endl;
    }
    else{
        cout<<"Input is not correct";
    }
}

// Also do with this logic
//  cin>>a;
//     if(a>'a' && a<'z'){    //--> This value's is taken from ASCII Table
//         cout<< " This is lowercase:"<< char(a)<<endl;
//     }