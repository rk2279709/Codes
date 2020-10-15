#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );}
int main()
{
    long n,k,i,j;
    long and[1000],or[1000],xor[1000];
    printf("input limit and integer: ");
    scanf("%d%d",&n,&k);
    long c=0;
    for(i=1;i<n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            and[c]=i&j;
            or[c]=i|j;
            xor[c]=i^j;
            c++;
        }
    }
    printf("\nthe last value of and is %d",and[c-1]);
    /*
    printf("the and result is:\n");
    for (i=0;i<c;i++)
    {
        printf("%d ",and[i]);
    }
     printf("\nthe or result is:\n");
    for (i=0;i<c;i++)
    {
        printf("%d ",or[i]);
    }
    */
     printf("\nthe xor result is:\n");
    for (i=0;i<c;i++)
    {
        printf("%d ",xor[i]);
    }
    qsort(and, c, sizeof(int), cmpfunc);
    qsort(or, c, sizeof(int), cmpfunc);
    qsort(xor, c, sizeof(int), cmpfunc);
    printf("\nthe and result is:\n");
    for (i=0;i<c;i++)
    {
        printf("%d ",and[i]);
    }
     printf("\nthe or result is:\n");
    for (i=0;i<c;i++)
    {
        printf("%d ",or[i]);
    }
     printf("\nthe xor result is:\n");
    for (i=0;i<c;i++)
    {
        printf("%d ",xor[i]);
    }
    int alag=0,orlag=0,xlag=0;
    printf("\nthe value of c is %d",c);
    printf("\nthe last value of and is %d",and[c-1]);
    while (alag!=1)
    {
        if (k-and[c-1]>=1)
        {
            printf("\n%d\n",and[c-1]);
            alag=1;
        }
        else
            c--;
    }
    while (orlag!=1)
    {
        if (k-or[c-1]>=1)
        {
            printf("%d\n",or[c-1]);
            orlag=1;
        }
        else
            c--;
    }
    while (xlag!=1)
    {
        if (k-xor[c-1]==1)
        {
            printf("%d\n",xor[c-1]);
            xlag=1;
        }
        else
            c--;
    }
}


