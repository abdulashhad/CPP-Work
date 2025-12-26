// Insertion in an array
#include<stdio.h>
#include<conio.h>

#define MAX 100

    void insbeg(int arr[100],int n,int x)
    {
    	int i;
    	printf("Enter the element to be inserted ");
    	scanf("%d",&x);
    	if(n==MAX)
    	printf("No more insertions can be done");
    	else
    	n=n+1;

      for(i=n-1;i<0;i--)
      arr[i+1]=arr[i];

    	arr[0] = x;
    }


    void insertatindex(int arr[100],int n,int x)
    {
    	int index,i;
    	printf("Enter the element to be inserted ");
    	scanf("%d",&x);
    	if(n==MAX)
    	printf("No more insertions can be done");
    	else
    	n=n+1;

    	printf("\nEnter the index : ");
    	scanf("%d",&index);

    	for(i=n-1;i>=index;i--)
      arr[i+1]=arr[i];

    	arr[index] = x;
    }

    void insertafindex(int arr[100],int n,int x)
    {
    	int index,i;
    	printf("Enter the element to be inserted ");
    	scanf("%d",&x);
     	if(n==MAX)
    	printf("No more insertions can be done");
    	else
    	n=n+1;

    	printf("\nEnter the index : ");
    	scanf("%d",&index);

    	for(i=n-1;i>=index;i--)
      arr[i+1]=arr[i];

    	arr[index+1] = x;

    }

    void insertbfindex(int arr[100],int n,int x)
    {
    	int index,i;
    	printf("Enter the element to be inserted ");
    	scanf("%d",&x);
     	if(n==MAX)
    	printf("No more insertions can be done");
    	else
    	n=n+1;

    	printf("\nEnter the index : ");
    	scanf("%d",&index);

    	for(i=n-1;i>=index;i--)
      arr[i+1]=arr[i];

    	arr[index-1] = x;

   }


	 void display(int arr[100],int n,int x)
    {
    	int i;
    	printf("\n Display the elements\t");
    	for(i=0;i<n;i++)
    	printf("%d\t",arr[i]);

	getch();
	}

   void dele(int arr[100],int n,int x)
   {
      int i,j,flag=0;
   	printf("Enter the number to be deleted ");
      scanf("%d",&x);

      for(i=0;i<n;i++)
      {
      	if(x==arr[i])
         {
         	printf("\nNumber %d found at %d index(%d position)",x,i,i+1);
            flag=1;
            break;
          }
      }

      if(flag==0)
      printf("\nNumber is not found ");
      for(j=i;j<n;j++)
      arr[j]=arr[j+1];

      n=n-1;
    }

void main()
{

    int arr[MAX],n,i,index,x,ch;
    printf("\n Enter the limit: ");
    scanf("%d",&n);

    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int c;
    do{
    printf("Enter\n1 to insert at beginning\n2 to insert at specific index\n3 to insert before an index\n4 to insert after an index\n5 to delete an element\n6 to Display the elements ");
    scanf("%d",&ch);

    switch(ch)
    {
    	case 1: insbeg(arr,n,x);
      			break;

    	case 2: insertatindex(arr,n,x);
      			break;

      case 3: insertbfindex(arr,n,x);
      			break;

      case 4: insertafindex(arr,n,x);
      			break;

      case 5: dele(arr,n,x);
      			break;

      case 6: display(arr,n,x);
      			break;
    }
    printf("Do you want to continue (0/9) ");
    scanf("%d",&c);
    }while(c==0);
getch();

}

