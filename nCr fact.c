#include<stdio.h>
int fact(int a)
{
int i,f=1;
for(i=1;i<=a;i++)
f=f*i;
return f;
}
int main()
{
    int n,r,x,y,z;
    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    if(n>r)
    {
    x=fact(n);
    y=fact(n-r);
    z=fact(r);
    printf("Value of nCr = %d",x/(y*z));
    }
    else
    printf("Invalid n and r values");
    return 0;
}