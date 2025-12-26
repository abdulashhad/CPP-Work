#include<conio.h>
#include<iostream.h>

class number
{
	public:
	int x;
   void input(){cout<<"\nEnter a Number ";cin>>x;}
};

class cube:public number
{
	public:
   void cubes(){cout<<"\nCube of Number is "<<x*x*x;}
};

class square:public number
{
	public:
   void squares(){cout<<"\nSqaure of Number is "<<x*x;}
};

void main()
{
	square s;
   cube c;
   s.input();
   s.squares();
   c.input();
   c.cubes();
getch();
}



