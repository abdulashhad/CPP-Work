#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 10

int front=-1,rear=-1,queue[MAX];

int peek()
{
	return queue[front];
}

int isfull()
{
	if(rear==MAX-1)
   return 1;
   else
   return 0;
}

int isempty()
{
	if(front==-1 || front>rear)
   return 1;
   else
   return 0;
}

void enqueue()
{
	int val;
	if(isfull()==1)
   printf("\n Overflow");
   else
   {  printf("Enter the digit you want to enqueue ");
   	scanf("%d",&val);
   	if(front==-1 && rear==-1)
      {
      	front++;
         rear++;
      }
      else
      {rear++;}

       queue[rear]=val;
   }
}

void dequeue()
{
	if(isempty()==1)
   printf("\nUnderflow ");
   else
   {
   	front++;
   }
}

void display()
{
	int i;
	printf("\nFront = %d, Rear=%d ",front,rear);
   printf("\nQueue Values: ");
   for(i=front;i<=rear;i++)
   printf("%d",queue[i]);
}

void main()
{
	int c;
   char ch;
   do
   {
   printf("\nPress 1 to Enqueue\nPress 2 to Dequeue\nPress 3 to Display\nPress 4 to Exit:   ");
   scanf("%d",&c);

   	switch(c)
      {
      	case 1:  enqueue();
         			break;

      	case 2: dequeue();
         			break;

      	case 3: display();
         			break;
         case 4: exit(0);
         			break;
		}


    }while(c!='4');

    getch();
}