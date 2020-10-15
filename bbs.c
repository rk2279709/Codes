#include<stdio.h>
void main()
{
    int n,temp;
    printf("Enter Size of Array:");
    scanf("%d",&n);
    int a[n],b[n],i,j;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Input Numbers are\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\nAfter Sorting \n");
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }

    }
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);

}
