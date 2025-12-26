#include<iostream.h>
#include<conio.h>

void main()
{
	void sum(int a,int b);
   void sum(int a,int b,int c);
   void sum(char a,char b);
   void sum(float a,float b);
   sum(1,2);
   sum(1,2,3);
   sum('a','b');
   //sum(5.78,4.22);
   getch();
 }

 void sum(int a,int b)
 {
 	cout<<a+b;
 }

 void sum(int a,int b,int c)
 {
 	cout<<"\n"<<a+b+c;
 }

 void sum(char a,char b)
 {
 	cout<<"\n"<<a+b;
  }

 void sum(float a,float b)
 {
 	cout<<"\n"<<a+b;
  }
