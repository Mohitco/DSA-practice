#include<iostream>
using namespace std;
int main(){
  int ruppes,check,hundred,fifty, twenty, tens;
  cout<<"Enter Your Amount Here: ";
  cin>>ruppes;
  switch(ruppes/100){
     case 0:
        hundred = 0;
        break;
     case 1:
        hundred = 1;
        ruppes -=100;
        break;
     case 2:
        hundred = 2;
        ruppes -=200;
        break;
     case 3:
        hundred = 4;
        ruppes -=300;
        break;
     case 4:
        hundred = 4;
        ruppes -=400;
        break;
     case 5:
        hundred = 5;
        ruppes -=500;
        break;
     case 6:
        hundred = 6;
        ruppes -=600;
        break;     
     case 7:
        hundred = 7;
        ruppes -=700;
        break;     
     case 8:
        hundred = 8;
        ruppes -=800;
        break;     
     case 9:
        hundred = 9;
        ruppes -=900;
        break;     
     case 10:
        hundred = 10;
        ruppes -=1000;
        break;     
     case 11:
        hundred = 11;
        ruppes -=1100;
        break;     
     case 12:
        hundred = 12;
        ruppes -=1200;
        break;     
     case 13:
        hundred = 13;
        ruppes -=1300;
        break;     
     case 14:
        hundred = 14;
        ruppes -=1400;
        break;  
     default:
        cout<<"Not found";
  }

  switch(ruppes/50){
     case 0:
        fifty = 0;
        break;
     case 1:
        fifty = 1;
        ruppes -=50;
        break;
     case 2:
        fifty = 2;
        ruppes -=100;
        break;
     case 3:
        fifty = 4;
        ruppes -=150;
        break;
     case 4:
        fifty = 4;
        ruppes -=200;
        break;
     case 5:
        fifty = 5;
        ruppes -=250;
        break;
     case 6:
        fifty = 6;
        ruppes -=300;
        break;     
     case 7:
        fifty = 7;
        ruppes -=350;
        break;     
     case 8:
        fifty = 8;
        ruppes -=400;
        break;     
     case 9:
        fifty = 9;
        ruppes -=450;
        break;     
     case 10:
        fifty = 10;
        ruppes -=500;
        break;     
     default:
        cout<<"Not found" ;
  }

  switch(ruppes/20){
     case 0:
        twenty = 0;
        break;
     case 1:
        twenty = 1;
        ruppes -=20;
        break;
     case 2:
        twenty = 2;
        ruppes -=40;
        break;
     case 3:
        twenty = 4;
        ruppes -=60;
        break;
     case 4:
        twenty = 4;
        ruppes -=80;
        break;
     case 5:
        twenty = 5;
        ruppes -=100;
        break;
     case 6:
        twenty = 6;
        ruppes -=120;
        break;     
     case 7:
        twenty = 7;
        ruppes -=140;
        break;     
     case 8:
        twenty = 8;
        ruppes -=160;
        break;     
     case 9:
        twenty = 9;
        ruppes -=180;
        break;     
     case 10:
        twenty = 10;
        ruppes -=200;
        break;     
     default:
        cout<<"Not found";  
  }

  switch(ruppes/10){
     case 0:
        tens = 0;
        break;
     case 1:
        tens = 1;
        ruppes -=20;
        break;
     case 2:
        tens = 2;
        ruppes -=40;
        break;
     case 3:
        tens = 4;
        ruppes -=60;
        break;
     case 4:
        tens = 4;
        ruppes -=80;
        break;
     case 5:
        tens = 5;
        ruppes -=100;
        break;
     case 6:
        tens = 6;
        ruppes -=120;
        break;     
     case 7:
        tens = 7;
        ruppes -=140;
        break;     
     case 8:
        tens = 8;
        ruppes -=160;
        break;     
     case 9:
        tens = 9;
        ruppes -=180;
        break;     
     case 10:
        tens = 10;
        ruppes -=200;
        break;    
     default:
     cout<<"not found";
  }
  cout<<"100 notes = "<<hundred<<endl;
  cout<<"50 notes = "<<fifty<<endl;
  cout<<"20 notes = "<<twenty<<endl;
  cout<<"10 notes = "<<tens<<endl;
}