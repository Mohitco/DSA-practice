#include<iostream>
using namespace std;
int main(){
 int num1,num2,op;
 cout<<"Enter the First No. : ";
 cin>>num1;
 cout<<"Enter the Second No. : ";
 cin>>num2;
 cout<<"Enter which operaion u Want to perform:"<<endl;
 cout<<" 1. Addition\n 2. Subtraction\n 3. Divisor\n 4. Multiplication\n 5. Modulo"<<endl;
 cout<<"--> ";
 cin>>op;
 switch (op){
    //continue is not used in switch case because continue only used to skip the iteration and used within the loop.
    case 1:
        cout<<num1<<" + "<<num2<<" = "<<num1 + num2;
        break;  
    case 2:
        cout<<num1<<" - "<<num2<<" = "<<num1 - num2;
        break;
    case 3:
        cout<<num1<<" / "<<num2<<" = "<<num1 / num2;
        break;
    case 4:
        cout<<num1<<" * "<<num2<<" = "<<num1 * num2;
        break;
    case 5:
        cout<<num1<<" % "<<num2<<" = "<<num1 % num2;
        break;
    default:
        cout<<"Enter valid operation";
        break;
 }
}