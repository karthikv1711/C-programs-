#include<stdio.h>

int main()
{
    int i,n,k;
    printf("Enter a number to print the table");
    scanf("%d",&n);
    printf("Enter no. of steps ");
    scanf("%d",&k);
    i=1;
    while(i<=k)
    {
    printf("%d  X%d  =%d\n",n,i,n*i);
    i++;
    }
    return 0;
}