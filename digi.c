#include <stdio.h>
#include <string.h>

int main() {

int i,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0,m=0;
    char n[1000];
    gets(n);
    for(i=0;n[i]!='\0';i++)
    {
    if(n[i]=='0')
     m=m+1;
     else if(n[i]=='1')
     b=b+1;
     else if(n[i]=='2')
     c=c+1;
     else if(n[i]=='3')
     d=d+1;
     else if(n[i]=='4')
     e=e+1;
     else if(n[i]=='5')
     f=f+1;
     else if(n[i]=='6')
     g=g+1;
     else if(n[i]=='7')
     h=h+1;
     else if(n[i]=='8')
     k=k+1;
    else if(n[i]=='9')
    l=l+1;
    else
continue;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",m,b,c,d,e,f,g,h,k,l);
    return 0;
}

