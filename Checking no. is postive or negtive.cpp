#include<iostream.h>
#include<conio.h>

void main()
{
	int n;
	cout<<"Enter the number to check ";
   cin>>n;

   if(n>0)
   cout<<n<<" is positive ";
   else if(n<0)
   cout<<n<<" is negitive ";
   else
   cout<<" Number is zero ";

getch();
}