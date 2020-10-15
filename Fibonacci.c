#include<iostream>
using namespace std;

main()
{
    int n,s,f1=0,f2=1,i;
    cout<<"Enter Number of Terms:";
    cin>>n;
    for(i=0;i<n;i++)
    {
       s=f1+f2;
       f1=f2;
       f2=s;
    }
    cout<<"Fibonacci series is "<< f1<<" ";


}
