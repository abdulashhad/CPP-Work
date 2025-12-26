#include<iostream.h>
#include<conio.h>

class country
{
	int Armyfunds;
   protected: int Infrastructure;
   public:  void inp(){
   cout<<"Enter Armyfunds and Infrastructure ";
   cin>>Armyfunds>>Infrastructure;}
   			void op(){cout<<"Armyfunds and Infrastructure are "<<Armyfunds<<"and "<<Infrastructure;}
   };

class state:public country
{
	int No_of_farms;
   public:void get(){
   cout<<"\nEnter no. of farms ";
   cin>>No_of_farms;}
   		 void show(){cout<<"\nNo. of farms are "<<No_of_farms;}
};

void main()
{
	state c1;
   c1.inp();
   c1.op();
   c1.get();
   c1.show();

getch();
}
