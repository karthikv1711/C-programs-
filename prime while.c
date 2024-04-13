#include<stdio.h>

int main()
{
    int i,n,f;
    scanf("%d",&n);
    i=1;
    f=0;
    while(i<=n)
    {
    if(n%i==0)
    f++;
    i++;
    }
    if(f==2)
    printf("%d is a prime",n);
    else
    printf("%d is not a prime",n);
    return 0;
}