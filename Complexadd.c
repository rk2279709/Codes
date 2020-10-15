#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
}c1,c2;
void main()
{
    int s1,s2;

    printf("Enter 1st No.:");
    scanf("%d %d",&c1.real,&c1.imaginary);
    printf("Enter 2nd No.:");
    scanf("%d %d",&c2.real,&c2.imaginary);

    s1=c1.real+c2.real;
    s2=c1.imaginary+c2.imaginary;
    printf("Sum of Complex No.= %d+%dj",s1,s2);


}
