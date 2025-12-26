//WAP in C to implement binary Search in an Array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int A[100],n,x,i,lb,ub,mid;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("Enter the element to be searched ");
    scanf("%d",&x);

    lb=0;
    ub=n-1;

    while(ub>=lb)
    {
    		printf("\nlb,ub = %d,%d",lb,ub);
      	mid=lb+((ub-lb)/2);

      	if(x<A[mid])
      	{ub=mid-1;}

      	else if(x>A[mid])
      	{lb=mid-1;}

      	else if(x==A[mid])
      	{
      		printf("\nValue is found at %d index",mid);
      		break;
      	}
     }
    if(ub<lb)
    printf("%d is not present in array ",x);


getch();
}




