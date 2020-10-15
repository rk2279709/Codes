
#include<stdio.h>
int main()
{
    char a[25];
    print("Enter a String:");
    scanf("%s",a);
    int i,b[10];
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0')
        b[i]=b[i]+1;
        else if(a[i]=='1')
        b[i]=b[i]+1;
        else if(a[i]=='2')
        b[i]=b[i]+1;
        else if(a[i]=='3')
        b[i]=b[i]+1;
        else if(a[i]=='4')
        b[i]=b[i]+1;
        else if(a[i]=='5')
        b[i]=b[i]+1;
        else if(a[i]=='6')
        b[i]=b[i]+1;
        else if(a[i]=='7')
        b[i]=b[i]+1;
        else if(a[i]=='8')
        b[i]=b[i]+1;
        else if(a[i]=='9')
        b[i]=b[i]+1;
    }
        for(i=0;i<10;i++)
            print("%d ",b[i]);
    return 0;
}
