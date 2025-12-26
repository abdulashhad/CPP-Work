#include<stdio.h>
#include<string.h>
#include<conio.h>
#define max 20

int top=-1,stack[max];

void push(int val)
{
	if(top==max-1)
   printf("\nStack Underflow ");
   else
   stack[++top]=val;
}

int pop()
{
	/*int val;
   val=stack[top];
   top--;
   return val;  */
   stack[top--];
}

void evaluate(char str[])
{
	int l,i,x,y;

	//printf("\n Enter an expression ");
   //scanf("%d",&str);
   l=strlen(str);
   for(i=0;i<l;i++)
   {
      if(str[i]>='0' && str[i]<='9')
   	push(str[i]);

    	continue;
      {
      	x=stack[top];
         pop();

         y=stack[top];
         pop();

         if(str[i]=='+')
         push(y+x);

         else if(str[i]=='-')
         push(y-x);

         else if(str[i]=='*')
         push(y*x);

         else if(str[i]=='/')
         push(y/x);
      }

    }
    printf("%d",stack[top]);
}

int main()
{
	char exp[]="138*+";
   evaluate(exp);
   return 0;
getch();
}
