//WAP in C to print transpose of a matrix

#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,j,r,c,A[100][100];

   printf("\nEnter the size of rows and columns ");
   scanf("%d%d",&r,&c);

   printf("\nEnter the Elements of Matrix ");
	for(i=0;i<r;i++)
   for(int j=0;j<c;j++)
   scanf("%d",&A[i][j]);

   printf("\nMatrix is ");
	for(i=0;i<r;i++)
   {
   	printf("\n");
   	for(int j=0;j<c;j++)
		printf("%d\t",A[i][j]);
    }

     printf("\n\nTranspose is ");
	for(i=0;i<r;i++)
   {
   	printf("\n");
   	for(int j=0;j<c;j++)
		printf("%d\t",A[j][i]);
    }




      getch();

}
