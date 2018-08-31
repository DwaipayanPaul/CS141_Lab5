//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration of variable
int a; 
//Input a number
cout<<"Enter a number=";
cin>>a;
//checking positivity
if(a>0)
 cout<<a<<" is a positive integer"<<endl;
//checking negativity
else if(a<0)
cout<<a<<" is a negative integer"<<endl;
else
cout<<a<<" is zero"<<endl;
   }
