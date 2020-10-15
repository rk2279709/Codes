#include<iostream>
using namespace std;
main()
{
    int n,i,f=1;
    cout<<"Enter n:";
    cin>>n;
    for(i=n;i!=0;i--)
        f=f*i;
    cout<<"Factorial of "<<n<<" is "<<f;


}
