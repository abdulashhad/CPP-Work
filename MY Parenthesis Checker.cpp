#include<conio.h>
#include<stdio.h>
#include<string.h>

#define max 20

int top,stack[max];

void push(char val)
{
	if(top == max-1)
   {	printf("Stack Overflow ");}
   else
   {stack[++top]= val;}
}

void pop()
{
	stack[top--];
}

/*void display()
{
	int i;
	printf("\nStack is ");
   for(i=0;i<top;i++)
   printf("%d",stack[i]);
} */

int isfull()
{
	if(top== max-1)
   return 1;
   else
   return 0;
}

int isempty()
{
	if(top==-1)
   return 1;
   else
   return 0;
}



void main()
{
	char str[100];
   int len=strlen(str);
   printf("\nEnter a string of paranthesis ");
   gets(str);
   int i;

   for(i=0;i<len;i++)
   {	if(str[i]=='(')
      	push(str[i]);
   	else if(str[i]==')')
      			pop();
      else
      printf("\nInvalid Character");
   }

   if(isempty())
   	printf("/nValid Parenthesis Expression");
  	else
   printf("/nInvalid Parenthesis Expression");
getch();
}
