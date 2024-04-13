#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a number to print the table");
    scanf("%d",&n);
    i=1;
    while(i<=20)
    {
    printf("%d  X%d  =%d\n",n,i,n*i);
    i++;
    }
    return 0;
}