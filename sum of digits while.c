#include<stdio.h>

int main()
{
    int n,s;
    s=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
    s=s+(n%10);
    n=n/10;
    }
    printf("Sum of digits=%d",s);
    return 0;
}