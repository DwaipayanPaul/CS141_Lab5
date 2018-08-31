//include library
#include<iostream>
using namespace std;
//write main function
int main()
 {
//declaration and intialisation of variable
int a=1; 
//setting a while loop till 100
while(a<=100)
{
//checking if it is even
if(a%2==0)
   {
//printing the even numbers
cout<<a<<endl;
//increment of a
a++;
     }
//if it is odd
else
  {
      //increment of a
      a++;
      continue; 
   }

}




}
