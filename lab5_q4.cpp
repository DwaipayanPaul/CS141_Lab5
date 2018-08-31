//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration of variable
int a,b,c; 
//Input a number
cout<<"Enter a number=";
cin>>a;
//Storing the remainder while dividing with 5 and 11
b=a%5;
c=a%11;
//checking divisibility with 5 and 11
if(b==0 && c==0)
 cout<<a<<" is divisible by both 5 and 11"<<endl;
//checking divisibility with 5 
else if(b==0)
cout<<a<<" is divisible by 5"<<endl;
//checking divisibility with 11
else if(c==0)
cout<<a<<" is divisible by 11"<<endl;
else 
cout<<a<<" is neither divisible by 5 nor by 11"<<endl;
   }
