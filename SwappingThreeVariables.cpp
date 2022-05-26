/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main() 
{
 int a,b,c;
 cout<<"Enter the value of a : ";
 cin>>a;
 cout<<"Enter the value of b : ";
 cin>>b;
 c=a; // 'c' is a temporary storage for variable 'a'
 a=b; // Assigning the value of 'b' in 'a'
 b=c; //Assigning the value of 'a' in 'b' as 'c' contains value of 'a'
 cout<<"After swapping a= "<<a<<" and b="<<b;
   return 0;
}