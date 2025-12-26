#include<stdio.h>
#include<conio.h>

#define MAX 100

int stack[MAX],top=-1;

void push(int val)
{
	if(top==MAX-1)
   printf("Stack Overflow ");
   else
   top=top+1;
   stack[top]=val;
}

void pop()
{
	if(top==-1)
   printf("Stack Underflow ");
   else
   top=top-1;
}

void display()
{
	int i;
   printf("\nStack is ");
   for(i=0;i<top;i++)
   printf("%d",stack[i]);
}

void main()
{
	push(1);
   display();
   push(3);
   display();
   push(5);
   display();
   push(2);
   display();
   push(1);
   display();
   pop();
   display();
   pop();
   display();
getch();
}   
