#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void Insert(int *head,int *tail,int *size,int A[]){
	int ele,flag=0;
	printf("Enter the Element you want to Insert : \n");
	scanf("%d",&ele);
	if (*tail==(*size-1))
	{
		printf("Overflow \n");
	}
	
	else if(*tail==-1){
	*head=0;
	*tail=0;
	A[*tail]=ele;
	}
	else 
	{
		(*tail)++;
		A[*tail]=ele;
	}
}

void Display(int head,int tail,int A[]){
	if(tail>-1){
		int i;
	for(i=head;i<=tail;i++)
	printf("  %d",A[i]);	}
	else
	printf("Queue is Empty\n");
}

void Update (int head,int tail,int A[]){
	int position,ele;
	printf("Enter the position you want to Insert : \n");
	scanf("%d",&position);
	printf("%d",position);
	
	if ((position>tail)||(position<0)||(tail==0)){
	printf("This position is invalid");
	return;}
	printf("Enter the Element you want to Insert : \n");
	scanf("%d",&ele);
	A[position-1]=ele;
}

void Delete(int *head,int *tail,int A[]){
	int ele;
	if(*tail>0){
	int i;
	for(i=*head;i<*tail;i++)
	printf("  %d",A[i]);
	(*head)++;
	printf("\n Element Deleted\n");
	return;	}
	else{
	printf("Queue is Empty\n");
	return; }

	
}

int main(){
	int n;
	printf("Enter the Size of Array : ");
	scanf("%d",&n);
	int arr=(int)malloc(n*sizeof(int));
	char ans='y';
	int choice;
	int index=0;
	int head=-1,tail=-1;
	do {
		printf("\n1. Insert an element \n");
		printf("2. Update an element\n");
		printf("3. Delete an element\n");
		printf("4. Display the Array\n");
		printf("5. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1: Insert(&head,&tail,&n,arr); break;
			case 2: Update(head,tail,arr); break;
			case 3: Delete(&head,&tail,arr); break;
			case 4: Display(head,tail,arr); break;
			case 5: exit(0);
		}
	}while(1);
	return 0;
}