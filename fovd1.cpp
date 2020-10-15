#include<iostream>
#define pi 3.141
using namespace std;

void area(int);
void area(int ,int);
int area(int);

main()
{
    int r,l,b,s,a;
    cout<<"Enter Radius:";
    cin>>r;
    cout<<"Enter Lenghth and Breadth:";
    cin>>l>>b;
    cout<<"Enter Sides :";
    cin>>s;

    area(r);
    area(l,b);
    a=area(s);
    cout<<"Area Of Square = "<<ar<<endl;
}
void area(int x)
{
    int ar;
    ar=pi*x*x;
    cout<<"Area Of Circle = "<<ar<<endl;
}
void area(int y,int z)
{
    int ar;
    ar=y*z;
    cout<<"Area Of Rectangle = "<<ar<<endl;
}
int area(int w)
{
    int ar;
    ar=w*w;
    return ar;
}
