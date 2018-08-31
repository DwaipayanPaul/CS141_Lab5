//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration of variable
int a,b; 
//Input a number
cout<<"Enter a number=";
cin>>a;
//Storing the remainder while dividing with 2
b=a%2;
//checking divisibility with 2
if(b==0)
 cout<<a<<" is even"<<endl;
 else 
cout<<a<<" is odd"<<endl;
   }
