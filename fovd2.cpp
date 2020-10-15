#include<iostream>
#define pi 3.141
using namespace std;

float vol(float);
int vol(int,int ,int);

main()
{
    int l,b,h,a2;
    float r,a1;
    cout<<"Enter Radius:";
    cin>>r;
    cout<<"Enter Length and Breadth and Height:";
    cin>>l>>b>>h;
    a1= vol(r);
    a2= vol(l,b,h);
    cout<<"Volume of Sphere = "<<a1<<endl;
    cout<<"Volume of Cuboid = "<<a2<<endl;

}

float vol(float x)
{
  float ar;
  ar=4*pi*x*x*x;
  return ar;
}
int vol(int x,int y,int z)
{
    int ar;
    ar=x*y*z;
    return ar;
}
