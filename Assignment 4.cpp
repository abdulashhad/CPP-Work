#include<conio.h>
#include<iostream.h>

class stuinfo
{
	int roll_no;
   char name;
   int school_id;
   public:

   void input(){cout<<"Enter the roll no, name and school id of student ";
   cin>>roll_no>>name>>school_id;}

   void display(){  cout<<"Roll no"<<roll_no<<"name"<<name<<"school id "<<school_id;}

   virtual void studentmarks();
};

class student:public stuinfo
{  int marks[5],tmarks;
	float perc;
	public:
   void studentmarks(){
   cout<<"Enter the marks of student in 5 subjects ";
   for(int i=0;i<5;i++)
   {cin>>marks[i];}
   cout<<"Total marks of student out of 500 and percentage are ";
   tmarks=0;
   for(int i=0;i<5;i++)
   {
   	tmarks+=marks[i];
      perc=tmarks/5;
   }
   cout<<"tmarks"<<tmarks<<"perc"<<perc;
   }
};


void main()
{
	stuinfo *st1;
   student *st;
   student s;
   stuinfo s1;

   st1=&s1;
   st=&s;

   st1->input();
   st1->display();
   st->studentmarks();
getch();
}


