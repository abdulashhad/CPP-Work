#include<iostream.h>
#include<conio.h>

void main()
{
   int n;
   cout<<"Enter the number to find factorial ";
   cin>>n;

   int f=1;
	for(int i=n;i>=1;i--)
   f=f*i;
   cout<<"Factorial is "<<f;
getch();
}