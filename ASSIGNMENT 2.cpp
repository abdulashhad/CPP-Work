#include<iostream.h>
#include<conio.h>

class media
{
	protected:
   char title[20];
   char publication[20];
  	public:
   virtual void get()=0;
   virtual void show()=0;

};

class book:protected media
{
	int no_of_pages;
   public:
   void get()
   {
   	cout<<"\n Enter the book info ";
   	cout<<"\n Enter the title ";
      cin>>title;
      cout<<"\nEnter the publication ";
      cin>>publication;
      cout<<"\nEnter the no. of pages ";
      cin>>no_of_pages;
   }

   void show()
   {
   	cout<<"BOOK INFO ";
   	cout<<"\n TITLE: OF BOOK"<<title;
      cout<<"\n PUBLICATION: OF BOOK "<<publication;
      cout<<"\n NO. OF PAGES: OF BOOK"<<no_of_pages;
   }
};

class tape: protected media
{
	float run_time;
   public:
   void get()
   {
   	cout<<"\n Enter the tape info ";
   	cout<<"\n Enter the title ";
      cin>>title;
      cout<<"\nEnter the publication ";
      cin>>publication;
      cout<<"\nEnter the playing time ";
      cin>>run_time;
   }

   void show()
   {
   	cout<<"TAPE INFO ";
   	cout<<"\n TITLE OF TAPE: "<<title;
      cout<<"\n PUBLICATION OF TAPE: "<<publication;
      cout<<"\n PLAYING TIME OF TAPE : "<<run_time;
   }
};

void main()
{
	tape *t1;
   book *b1;
   book b;
   tape t;

   t1=&t;
   b1=&b;

   b1->get();
   t1->get();
   b1->show();
   t1->show();
getch();
}
