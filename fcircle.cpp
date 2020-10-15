#include<iostream>
#define pi 3.141
using namespace std;


void arc(float a)
{
    float ar;
    ar=pi*a*a;
    cout<<"Area is "<<ar<<endl;
}



main()
{
    float r;
    cout<<"Enter Radius :";
    cin>>r;
    arc(r);
}
