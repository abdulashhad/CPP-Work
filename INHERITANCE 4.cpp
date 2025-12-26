#include<iostream.h>
#include<conio.h>

class school
{
    int school_id;
    char school_name;
    public:
    			void inp(){
            cout<<"\nEnter school id and name ";
            cin>>school_id>>school_name;}
    			void op(){cout<<"\nSchool id is "<<school_id<<"\nSchool name is "<<school_name;}
};

class student:public school
{
	int roll_no;
   char name;

	public:void get(){
   cout<<"\nEnter roll no and name ";
   cin>>roll_no>>name;}
   			void show(){cout<<"\nroll no is "<<roll_no<<"\nName is "<<name;}
};

void main()
{
	student s;
   s.inp();
   s.op();
   s.get();
   s.show();

getch();
}
