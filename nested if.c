#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    if(a>c)
    printf("A is big");
    else
    printf("C is big");
    }
    else
    {
    if(b>c)
    printf("B is big");
    else
    printf("C is big");
    }
    return 0;
}