#include<iostream>
using namespace std;

int prime(int);
main()
{
    int n,p;
    cout<<"Enter N:";
    cin>>n;
   p= prime(n);
    cout<<"Next Prime = "<<p<<endl;
}

int prime(int x)
{
    int y,i,j,c;

    for(i=x+1;i<x+10;i++)
    {
        c=1;
        for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                 c++;
                }
            }
                if(c==2)
                    break;
    }

    return i ;

}
