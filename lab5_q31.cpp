//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration of variable
int n;
int a=0;
//Input the last natural number till which numbers would be printed
cout<<"Enter a number=";
cin>>n;
//setting a while loop till the quotient turns 0
while(n>0)
{
//finding quotient and storing it back
n=n/10;
//increment of a, keeping track of how many times the loop is executed
a++;
   }
//displaying no. of digits
cout<<"The number of digits are="<<a<<endl;

}
