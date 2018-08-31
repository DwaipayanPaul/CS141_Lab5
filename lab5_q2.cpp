//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration of variables
int a,b,c; 
//Input three numbers
cout<<"Enter the first number=";
cin>>a;
cout<<"Enter the second number=";
cin>>b;
cout<<"Enter the third number=";
cin>>c;
//checking greater of three numbers
if(a>c && a>b)
 cout<<"The maximum number is="<<a<<endl;
else if(b>a && b>c)
cout<<"The maximum number is="<<b<<endl;
else
cout<<"The maximum number is="<<c<<endl;
   }
