#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int b, int a)
{
int i,j,n=0,p,q,r,large=0,lar=0,l=0;
long long int x[100000],y[100000],z[100000];
for(i=1;i<=a;i++)
{
    for(j=i+1;j<=b;j++)
    {
        x[n]=i&j;
        y[n]=i|j;
        z[n]=i^j;
        n++;
    }
}

for(i=0;i<n;i++)
{
    if(z[i]>l&&z[i]<a)
        l=z[i];
}

for(i=0;i<n;i++)
{
if(y[i]>lar&&y[i]<a)
        lar=y[i];
}

for(i=0;i<n;i++)
{
    if(x[i]>large&&x[i]<a)
    large=x[i];
}
printf("%lld\n%lld\n%lld",large,lar,l);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
    }

