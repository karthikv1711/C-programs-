#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("A is big");
    if(a<b)
    printf("B is big");
    if(a==b)
    printf("A and B are equal");
    return 0;
}