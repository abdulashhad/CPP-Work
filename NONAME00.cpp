#include<conio.h>
#include<stdio.h>
#include<string.h>

#define MAX 100

char stack[MAX];
int top=-1;

void push(char val)
{
	if(top==MAX-1)
   printf("Stack Overflow ");
   else
   stack[++top]==val;
}

void pop()
{
	if(top==-1)
   printf("Stack Underflow ");
   else
   printf("%c",stack[top--]);
}

void main()
{
	int i,l;
   char str[]="MY INDIA ";
   l=strlen(str);

   for(i=0;i<l;i++)
   push(str[i]);

   for(i=0;i<l;i++)
   pop();
getch();
}

