#include<stdio.h>

int main()
{
    int i,j,n;
    n=5;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=10;j++)
    printf("%d X %d =%d\n",i,j,i*j);
    printf("\n");
    }
    return 0;
}