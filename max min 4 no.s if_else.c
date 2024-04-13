#include<stdio.h>

int main()
{
    int a,b,c,d,max, min;
    printf("Enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=min=a;
    if(b>max)
    max=b;
    else
    min=b;
    if(c>max)
    max=c;
    else
    min=c;
    if(d>max)
    max=d;
    else
    min=d;
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    return 0;
}