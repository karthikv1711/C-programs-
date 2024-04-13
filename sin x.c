#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,t,f,sign=1;
    float x,sin;
    printf("Enter n and x values");
    scanf("%d%f",&n,&x);
    t=1;
    sin=0;
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=t;j++)
            f=f*j;
        sin=sin+sign*pow(x,t)/f;
        t=t+2;
        sign=sign*(-1);
    }    
        printf("Sin x=%f",sin);
        return 0;
}