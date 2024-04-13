#include<stdio.h>

int main()
{
    int i,f,n;
    scanf("%d",&n);
    i=1;
    f=1;
    while(i<=n)
    {
    f=f*i;
    i++;
    }
    printf("Factorial=%d",f);
    return 0;
}