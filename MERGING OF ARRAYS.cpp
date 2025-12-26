#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int p,q,c,m,n;
    printf("Enter the no of Elments in array 1:");
    scanf("%d",&p);
    printf("Enter the number of Elments in array 2:");
    scanf("%d",&q);
    int arr1[100],arr2[100],arr3[200];
    printf("\nEnter The Elements for Array 1: ");
    for (int i = 0; i < p; i++)
    {
        printf("\nEnter the Elements %d is: ",i+1);
        scanf("%d",&arr1[i]);
        
    }
    printf("\nEnter the Elements for Array 2:");
    for (int i = 0; i < q; i++)
    {
        printf("\nEnter the Elements %d is: ",i+1);
        scanf("%d",&arr2[i]);
        
    }
    c=0;
    m=0;
    n=0;
    while ((m<p)&&(n<q))
    {
        if (arr1[m]<=arr2[n])
        {
            arr3[c] = arr1[m++];
        }
        else
        {
            arr3[c] = arr2[n++];
        }
        c++;
    }
    while (m<p)
    {
        arr3[c] = arr1[m];
        c++;
        m++;
    }
    while (n<q)
    {
        arr3[c] = arr2[n];
        c++;
        n++;
    }
    printf("\nMerged array:\n");
    for (int m = 0; m < c; m++)
    {
        printf("%d ",arr3[m]);
    }



    return 0;
    getch();
    }