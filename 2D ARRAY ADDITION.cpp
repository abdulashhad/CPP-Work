#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5][5],a2[5][5],a3[5][5],Res[10][10];
	int i,j,k,n;

   printf("\nEnter the limit ");
   scanf("%d",&n);

   printf("\nEnter the Elements of Matrix 1");
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);

    printf("\nEnter the Elements of Matrix 2");
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   scanf("%d",&a2[i][j]);


 //ADDING TWO MMATRICES
	   for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
      a3[i][j]=a[i][j]+a2[i][j];

 //MULTIPLICATION OF TWO MATRICES
      for(i=0;i<n;i++)
   	for(j=0;j<n;j++)
      for(k=0;k<n;k++)
      Res[i][j]=0;
      Res[i][j]=Res[i][j]+(a[i][k]*a2[k][j]);

      printf("\nElements are\n");
  	 	for(i=0;i<n;i++)
   	{
   		for(j=0;j<n;j++)
   		printf("%d",Res[i][j]);
      	printf("\n");
   	}

	// TRANSPOSE OF A MATRIX
    	printf("\nTranpose of a1 is \n");
   	for(i=0;i<n;i++)

   	{
   		for(j=0;j<n;j++)
   		printf("%d",a[j][i]);
      	printf("\n");
   	}



    // PRINT DIAGNOL
   printf("\nElements are\n");
   for(i=0;i<n;i++)

   {
   	for(j=0;j<n;j++)
      if(i==j)
   	printf("%d",a[i][j]);
      printf("\n");
   }

   // PRINT UPPER TRIANGEL
   	printf("\nElements are\n");
   	for(i=0;i<n;i++)

   {
   	for(j=0;j<n;j++)
      if(i<=j)
   	printf("%d",a[i][j]);
      printf("\n");
   }



   printf("\nElements are\n");
   for(i=0;i<n;i++)

   {
   	for(j=0;j<n;j++)
   	printf("%d",a3[i][j]);
      printf("\n");
   }

      getch();
}

