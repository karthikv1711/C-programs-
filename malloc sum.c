#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n,i,sum=0;
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(i=0;i<n;i++)
		sum = sum + *(p+i);
	printf("Sum = %d",sum);	
	free(p);
	
}
    