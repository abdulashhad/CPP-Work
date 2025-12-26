#include<conio.h>
#include<stdio.h>
#include<string.h>

#define max 20

int top=-1,stack[max];

void push(char val)
{
	if(top == max-1)
   {	printf("Stack Overflow ");}
   else
   {stack[++top]= val;}
}

char pop()
{
    int val;
    val=stack[top];
    top--;
    return val;
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
	char str[100],ch;
   int len=strlen(str);
   printf("\nEnter a string of paranthesis ");
   gets(str);
   int i;

   for(i=0;i<=len;i++)
   {	
    if(str[i]!=')')
    {
        printf("\n pushing %c",str[i]);
      	push(str[i]);
    }
   	else if(str[i]==')')
   	{
      	// pop unitll ( reached
      	do
      	{
      	 ch=pop();
      	 printf("\n poping %c",ch);
      	}while(ch!='(');
   	}

   }

   if(isempty())
   	printf("\n Valid Parenthesis Expression");
  	else
   printf("\n Invalid Parenthesis Expression");
getch();
}