#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
   cout<<"Enter the values of a and b ";
   cin>>a>>b;

   cout<<"Values before swapping are a= "<<a<<" and b= "<<b;

   c=a;
   a=b;
   b=c;

   cout<<"\nValues after swapping are a= "<<a<<" and b= "<<b;
   getch();
}
