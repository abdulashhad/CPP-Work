#include<iostream.h>
#include<conio.h>
int factorial(int x);
void main()
{
	int a;
   cout<<"Enter number to find factorial";
   cin>>a;
   cout<<factorial(a);
   getch();
}
int factorial(int x)
{
	int f=1;
	for(int i=x;i>=1;i--)
{	f=f*i;
}
return f;
}

