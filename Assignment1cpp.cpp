#include<iostream.h>
#include<conio.h>

class student
{
	int roll_no,id;
   char name[20];
   public:
   void get()
   {
   	cout<<"\nEnter name,id, and roll no\n ";
      cin.get(name,10);cin>>roll_no>>id;
   }
   void show()
   {
   	cout<<"\nName: "<<name<<"\nid "<<id<<"\nroll no "<<roll_no;
   }
};

class exam:public student
{
   public:
	int marks[5];
   void getmarks()
   {
		cout<<"\nEnter the marks of 5 subjects out of 100\n";
      for(int i=0;i<5;i++)
      cin>>marks[i];
   }
};

class result:public exam
{
	float total_marks;
   public:
   	result(){total_marks=0;}
   		void tmarks()
         {
         	getmarks();
          	for(int i=0;i<5;i++)
     			total_marks+=marks[i];
            cout<<"\nPercentage: "<<total_marks/5;
         }
};

void main()
{
	result R;
   R.get();
   R.tmarks();
   R.show();
getch();
}
