#include<iostream>
using namespace std;
int lcm(int ,int);
main()
{
    int a,b,l;
    cout<<"Enter A and B:";
    cin>>a>>b;
   l=lcm(a,b);
   cout<<"LCM = "<<l;
}

int lcm(int x, int y)
{
    int i,m,s;
    if(x<y)
        s=x;
    else
        s=y;
    for(i=s;i<=(x*y);i++)
    {
        if(i%x==0&&i%y==0)
        {
            m=i;
        break;
        }
    }
    return m;
}
