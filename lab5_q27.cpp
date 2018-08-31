//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration and intialisation of variable
int a=0; 
int n;
//Input a natural number till which the natural numbers would be added
cout<<"Enter a natural number=";
cin>>n;
//setting a for loop for generating natural numbers
for(int i=1;i<=n;i++)
{
 //adding the natural numbers
 a+=i;
   }
//printing the sum of natural numbers
cout<<"The sum of all natural numbers till "<<n<<" is="<<a<<endl;





}
