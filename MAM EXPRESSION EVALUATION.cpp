#include<stdio.h>
#include<string.h>
#include<conio.h>
#define max 20

int top=-1,stack[max];
char str[]={'1','3','8','*','+','\0'};

void push(int val)
{
	if(top==max-1)
   printf("\nStack Underflow ");
   else
   stack[++top]=val;
}

int pop()
{
	int val;
   val=stack[top];
   top--;
   return val;
}

void evaluate(char str[])
{
	int n,l,i=0,x,y,z;

    printf ("\n %s",str);

   while (str[i]!='\0')
   {
      if(str[i]>='0' && str[i]<='9')
      {
          printf("\n pushing %c on stack ",str[i]);
   	      push(str[i]);
   	      i++;
      }
      else
      {
      	   x=stack[top];
      	   printf("\n 1. popping %c from stack ",x);
         pop();

         y=stack[top];
         printf("\n 2. popping %c from stack ",y);
         pop();

         if(str[i]=='+')
         {
             x=x-'0';
             y=y-'0';
             z=(x+y);
          printf("\n pushing %d + %d = %d on stack ",x,y,z);
             z=z+'0';
         push(z);
         }
         else if(str[i]=='-')
         {
                          x=x-'0';
             y=y-'0';
             z=(x-y);
                       printf("\n pushing %d - %d = %d on stack ",x,y,z);

             z=z+'0';
         push(z);
         }
         else if(str[i]=='*')
         {
             x=x-'0';
             y=y-'0';
             z=(x*y);
                       printf("\n pushing %d * %d = %d on stack ",x,y,z);

             z=z+'0';
         push(y*x);
         }
         else if(str[i]=='/')
         {
                          x=x-'0';
             y=y-'0';
             z=(y/x);
                       printf("\n pushing %d / %d = %d on stack ",x,y,z);

             z=z+'0';
         push(z);
         }

         i++;
      }

    }
    printf("Final answer: %d",stack[top]);
}

int main()
{
    evaluate(str);
   return 0;
getch();
}