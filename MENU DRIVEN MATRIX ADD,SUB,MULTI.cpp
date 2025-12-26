#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>


int add(int a[20][20],int b[20][20],int c[20][20],int m,int n)
{
        int i,j;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                        c[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("\n");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                        printf("%d ",c[i][j]);
                }   printf("\n");
            }
}

int sub(int a[20][20],int b[20][20],int c[20][20],int m,int n)
{
        int i,j;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];

                }
            }
            printf("\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                        printf("%d ",c[i][j]);
                }   printf("\n");
            }

}

int mult(int a[20][20],int b[20][20],int c[20][20],int m,int n,int o,int p)
{
        int i,j;
        if(m==p&&n==o)
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                        c[i][j]=a[i][j]*b[i][j];
                }
            }
        }
        else
        printf("\nMatrix cannot be added\n");
        printf("\n");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                        printf("%d ",c[i][j]);
                }    printf("\n");
            }
}

void main()
{
int i,j,a[20][20],b[20][20],c[20][20],m,n,o,p,ch;
printf("Enter size of matrix 1: ");
scanf("%d%d",&m,&n);
printf("\nEnter elts of matrix 1: ");
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("Enter size of array 2: ");
scanf("%d%d",&o,&p);
printf("\nEnter elts of matrix 2: ");
for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
do{
printf("\nEnter\n1 For Addition\n2 For Subtraction\n3 For Multiplication\n4 Exit");
switch(ch)
{
    case 1:add(a,b,c,m,n);
            break;

    case 2:sub(a,b,c,m,n);
            break;

    case 3:mult(a,b,c,m,n,o,p);
            break;

    case 4: exit(0);
            break;

}
scanf("%d",&ch);
}while(ch!=0);
getch();
}