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
 c=a;
 a=b;
 b=c;
 cout<<"After swapping a= "<<a<<" and b="<<b;
   return 0;
}