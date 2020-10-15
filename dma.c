#include<stdio.h>
struct emp
{
    char name[25];
    char gender;
    int pay;
};
void main()
{
    int n,i;
    printf("Enter No. of Employee:");
    scanf("%d",&n);
    struct emp *info;
    info=(struct emp*)malloc(n*(sizeof(struct emp)));
    for(i=0;i<n;i++)
    {
        gets(info[i]->name);
        gets(info[i]->gender);
        scanf("%d",&info[i]->pay);
    }
for(i=0;i<n;i++)
    printf("%s  %c  %d",(info+i).name),(info+i).gender),info+i).pay))
}
