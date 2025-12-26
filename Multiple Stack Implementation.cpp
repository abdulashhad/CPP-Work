//WAP in C to implement 2 stack array
#include<conio.h.>
#include<stdio.h>

#define max 10

int stack[max],topA=-1,topB=max;

void pushA(int val)
{
	if(topB-topA==1)
   printf("Stack A Overflow ");
   else
   stack[++topA]=val;
}

void pushB(int val)
{
	if(topB-topA==1)
   printf("Stack B overflow ");
   else
   stack[--topB]=val;
}

void popA()
{
	if(topA>=0)
   printf("Stack A Underflow ");
   else
   topA=topA-1;
}


void popB()
{
	if(topB==max)
   printf("Stack B Underflow ");
   else
   topB=topB-1;
}

void display()
{
	int i;
   printf("\nElments of Stack A are: ");
   for(i=0;i<topA;i++)
   printf(" %d ",stack[i]);

   printf("\nElments of Stack B are: ");
   for(i=max-1;i>=topB;i--)
   printf(" %d ",stack[i]);

   printf("\nElments of Stack Array are: ");
   for(i=0;i<max;i++)
   printf(" %d ",stack[i]);
   }

void main()
{
   pushA(10);
   pushA(20);
   pushA(30);

   pushB(100);
   pushB(90);
   pushB(80);
   pushB(70);

   popA();
   pushB(200);

   display();
getch();
}
