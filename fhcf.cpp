#include<iostream>
using namespace std;

int hcf(int,int);
main()
{
    int a,b,h;
    cout<<"Enter A and B:";
    cin>>a>>b;
    h=hcf(a,b);
    cout<<"HCF = "<<h;
}
int hcf(int x,int y)
{
    int i,s,m;
    if(x>y)
        s=x;
    else
        s=y;
    for(i=1;i<=s;i++)
    {
        if(x%i==0&&y%i==0)
            m=i;
    }
    return m;
}
