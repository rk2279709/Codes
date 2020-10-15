#include<iostream>
using namespace std;
 int sum(int, int);
 main()
{

    int a,b;
    cout<<"Enter A & B:\n";
    cin>>a>>b;
    cout<<sum(a,b);
}
int sum(int x,int y)
{
   return (x+y);
}
