#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 5
int front=-1,rear=-1,queue[10];

void enqueue()
{
	int val;
   printf("\nEnter the element you want ");
   scanf("%d",&val);
	if(front==0 && rear== MAX-1)
   	printf("\nOverflow ");
   else
   {
   	if(front==-1 && rear==-1)
      {
      	front=0;
         rear=0;
      }
      else if(rear==MAX-1 && front!=0)
      {
      	rear=0;
      }
      else
      {
      	rear++;
      }
      queue[rear]=val;
   }
}

void dequeue()
{
	int val;
	if(front==-1)
   {
   	printf("\nUnderflow ");
   }
   else if(front==rear)
   {
   	val=queue[front];
      front=-1;
      rear=-1;
   }
   else if(front==MAX-1)
   {
   	val=queue[front];
      front=0;
   }
   else
   {
   	val=queue[front];
      front++;
   }
   printf("\nElement deleted is: %d",val);
}

void display()
{
	int i;
   printf("\nFront=%d, Rear=%d ",front,rear);
   printf("\nElements are : \n");
   if(front<=rear)
   {
   	for(i=front;i<=rear;i++)
      printf("%d", queue[i]);
    }

    else
    {
    	for(i=front;i<=MAX-1;i++)
      printf("%d",queue[i]);


    	for(i=0;i<=rear;i++)
      printf("%d",queue[i]);
     }
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

