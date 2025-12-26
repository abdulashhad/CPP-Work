#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *temp,*temp2,*start=NULL,*NN,*current,*temp3;


void insertfirst()
{
	int val;
   printf("\nEnter the value to be added in starting ");
   scanf("%d",&val);

   NN=(struct node*) malloc(sizeof(struct node*));
   NN->data=val;
   NN->next=NULL;

   if(start==NULL)
   {
   	start=NN;
      current=NN;
   }
   else
   {
   NN->next=start;
   start=NN;
   }
}

void insertmid()
{
	int val,pos,i;
   printf("\nEnter the position at which insertion is to be done ");
   scanf("%d",&pos);


   printf("\nEnter the value to be added in position ");
   scanf("%d",&val);

   NN=(struct node*) malloc(sizeof(struct node*));
   NN->data=val;
   NN->next=NULL;

   if(start==NULL)
   {
   	start=NN;
      current=NN;
   }
   else
   {
   	temp=start;   //traversing
      for(i=0;i<pos;i++)
      temp=temp->next;

      temp2=temp->next;

      //temp->next->temp2;
      temp->next=NN;
      NN->next=temp2;
   }
}

void create()
{
	int val,ch;
	do{
		printf("\n enter the number: ");
		scanf("%d",&val);
      NN=(struct node*) malloc(sizeof(struct node *));
		NN->data = val;
		NN->next=NULL;
		if (start==NULL) // 10
		{
			start=NN;
			current=NN;
		}
		else // 10 -> 20 -> 30
		{
			current->next=NN;
			current=NN;
		}
   	printf("\n press -1 to stop..");
		scanf("%d",&ch);
   }while(ch!=-1);
}

void display()
{
	temp=start;
	printf("\n Elements of SLL: ");
   while(temp!=NULL)
   {
		printf(" %d -> ",temp->data);
		temp=temp->next;
	}
}

void deletestart()
{
	if (start==current) // only one element in LL
	{
		start=NULL;
		current=NULL;
	}
	else
	{
		temp=start->next;
		start=temp;
	}
}

void deleteend()
{
	temp=start;
	while(temp->next!=NULL)// 13, 14, t2 15, t 16
	{
		temp2=temp;
		temp=temp->next;
   }
	printf("\n Last element: %d, Second last element:%d",temp->data,temp2->data);
	free(temp);
	temp2->next=NULL;
	current=temp2;
}

void deletebefore()
{
	int val;
	if (start==current) // only one element in LL
	{
		start=NULL;
		current=NULL;
	}
	else
	{
		printf("\n Enter the number before which is to be deleted: ");
		scanf("%d",&val);
		temp=start;
		temp2=start;
		temp3=start;
	while(temp->data!=val)// 13, 14, 15, 16
	{
		temp3=temp2;
		temp2=temp;
		temp=temp->next;
	}
	printf("\n temp3=%d, temp2=%d, temp=%d ",temp3->data,temp2->data,temp->data);

	temp3->next=temp;
	free(temp2);

 	}
}

void deleteafter()
{
	int val;
	if (start==current) // only one element in LL
   {
		start=NULL;
		current=NULL;
	}
	else
	{
		printf("\n Enter the number after which is to be deleted: ");
		scanf("%d",&val);
		temp=start;
		while(temp->data!=val)
		{
			temp=temp->next;
		}
		temp2=temp->next;
		temp->next = temp2->next;
		free(temp2);

	   }
}

int main()
{
	create();
	display();
   insertmid();
   display();
   //deletestart();
	//display();
	//deleteend();
	//display();
	deleteafter();
	display();
	getch();
}

