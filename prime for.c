#include<stdio.h>

int main()
{
    int f,i,n;
    f=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    if(n%i==0)
    {
    f=0;
    break;
    }
    if(f==1)
    printf("%d is a prime number",n);
    else;
    printf("%d is not a prime number",n);
    return 0;
}