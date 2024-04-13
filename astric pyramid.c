#include<stdio.h>

int main()
{
    int i,space,rows,k=0;
    printf("Enter no. of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
    for(space=1;space<=rows-i;space++)
    printf(" ");
    for(k=0;k!=i*2-1;k++)
    {
    printf("*");
    }
    printf("\n");
    }
    return 0;
}