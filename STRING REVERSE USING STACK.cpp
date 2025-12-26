//WAP in C to find reverse of string using stacks
#include<stdio.h>
#include<string.h>
#include<conio.h>

#define max 100
int top,stack[max];

void push(char val){
      if(top == max-1)
      {

          printf("stack overflow");
      }

      else
      {
          stack[++top]=val;
      }

}

void pop(){
    printf("%c",stack[top--]);
}


void main()
{
   char str[]="COMPUTER SCIENCE";
   int len = strlen(str);
   int i;

   for(i=0;i<len;i++)
        push(str[i]);

   for(i=0;i<len;i++)
	pop();
getch();
}