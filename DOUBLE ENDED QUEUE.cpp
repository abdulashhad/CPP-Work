[13:00] SUMIT KUMAR
    #include<stdio.h>
#include<stdlib.h>
#define max 5

int queue[max];
int front=-1, rear=-1;
void enqueue_rear(int val)
{? if(rear==max-1)
printf("\nEnqueue from rear not possible\n");
else if(front==-1 && rear==-1)
{?front=0; rear=0;}?
else
rear++;
 queue[rear]=val;
}?
void enqueue_front(int val)
{?
if(front==-1)
printf("\nEnqueue from front not possible\n");
else
front--;
queue[front]=val;
}?

void dequeue_rear()
{? if (rear==-1)
printf("\nQueue is empty\n");
else
{?printf("dequeued value: %d\n", queue[rear]);
rear--;
}?
}?
void dequeue_front()
{? if(front>rear)
printf("\nQueue is empty\n");
else
{?printf("\ndequeued value: %d\n", queue[front]);
front++;
}?
}?
void display()
{?int i;
printf("\nQueue status:\n");
for(i=front; i<=rear; i++)
printf("%d ",queue[i]);
}?

void main()
{? int ch,val;
do
{? printf("\n1.Enqueue from front");
printf("\n2.Enqueue from rear");
printf("\n3.Dequeue from front");
printf("\n4.Dequeue from rear");
printf("\n5.Display");
printf("\nEnter choice: ");
scanf("%d",&ch);
switch(ch)
{? case 1: printf("\nEnter value: ");
scanf("%d",&val);
enqueue_front(val); break;
case 2: printf("\nEnter value: ");
scanf("%d",&val);
enqueue_rear(val); break;
case 3: dequeue_front(); break;
case 4: dequeue_rear(); break;
case 5: display(); break;
default: exit(0);
}?
}?while(ch!=0);

}?
