#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void enqueue(int *head,int *tail,int size,int A[]){

	if(*head==-1&&*tail==-1){
		*head=0;
		*tail=0;
		int ele;
	printf("Enter the Element you want to Insert : \n");
	scanf("%d",&ele);
		A[*tail]=ele;
	}
	else if((((*tail)+1)%size)==*head){
		printf("\n\t Circular Queue is FULL");
		return;
	}
	else
		{	
			int ele;
	printf("Enter the Element you want to Insert : \n");
	scanf("%d",&ele);
			*tail=(*tail+1)%size;
			A[*tail]=ele;
		}
	
}

void Display(int head,int tail,int size,int A[]){
	if(head==-1&&tail==-1){
		printf("\n\t Circular Queue is empty");
	}
	else if(head<tail){
			int i;
	for(i=head;i<=tail;i++)
	printf("  %d",A[i]);
	}
	else if(head>tail){
		int i,j;
		for(i=head;i<size;i++)
	printf("  %d",A[i]);
	for(j=0;j<=tail;j++)
	printf("  %d",A[j]);
	}
}



void Delete(int *head,int *tail,int size,int A[]){
	if(*head==-1&&*tail==-1){
		printf("\n\t Circular Queue is Empty");
	}
	else if(*head==*tail){
		*head=-1;
		*tail=-1;
	}
	else{
		*head=(*head+1)%size;
	}


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
		printf("2. Delete an element\n");
		printf("3. Display the Array\n");
		printf("4. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1: enqueue(&head,&tail,n,arr); break;
			case 2: Delete(&head,&tail,n,arr); break;
			case 3: Display(head,tail,n,arr); break;
			case 4: exit(0);
		}
	}while(1);
	return 0;
}