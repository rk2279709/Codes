#include<iostream>
using namespace std;

main()
{
    int n,s,f1=0,f2=1,i;
    cout<<"Enter Number of Terms:";
    cin>>n;
     cout<<"Fibonacci series is ";
    for(i=0;i<n;i++)
    {
        cout<< f1<<" ";
       s=f1+f2;
       f1=f2;
       f2=s;

    }
}

