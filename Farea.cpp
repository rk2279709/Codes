#include<iostream>
using namespace std;
#define pi 3.141
void area(float);

main()
{
  float r;
  cout<<"Enter Radius:";
  cin>>r;
  area(r);
return 0;
}
void area(float x)
{
    float ar;
    ar=pi*x*x;
    cout<<"Area = "<<ar;
}
