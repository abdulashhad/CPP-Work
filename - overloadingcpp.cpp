#include<iostream.h>
#include<conio.h>

class Distance
{
	public:
  	int feet,inches;
   Distance(int f,int i){feet=f;inches=i;}

   void operator -()
   {
   	feet=-feet;
      inches=-inches;
      cout<<"\n"<<feet<<"\n"<<inches;
   }

};

void main()
{
	Distance d1(8,9);
   -d1;
getch();
}
