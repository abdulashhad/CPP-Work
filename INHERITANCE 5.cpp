#include<iostream.h>
#include<conio.h>

class country
{
	int armyfunds;
   protected:
   int infrastructure;
   public:
   void collect(){cout<<"Enter armyfunds and infrastructure ";cin>>armyfunds>>infrastructure;}
   void provide(){cout<<"\nArmyfunds and infrastructure are "<<armyfunds<<"and "infrastructure;}
};

class state:public country
{
	int no_of_farms;
   public:
   void put(){cout<<"Enter no. of farms ";cin>>no_of_farms;}
   void get(){cout<<"No. of Farms are "<<no_of_farms;}
};

class district:public state
{
	int no_of_offices;
   public:
   void input(){cout<<"Enter no. of offices ";cin>>no_of_offices;}
   void output(){cout<<"No. of offices are "<<no_of_offices;}
};

void main()
{
	district d;
	d.input();
   d.output();
   d.put();
   d.get();
   d.collect();
   d.provide();
}   
