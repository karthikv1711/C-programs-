#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,t,f,sign=1;
    float x,cos;
    printf("Enter n and x values");
    scanf("%d%f",&n,&x);
    t=0;
    cos=0;
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=t;j++)
            f=f*j;
        cos=cos+sign*pow(x,t)/f;
        t=t+2;
        sign=sign*(-1);
    }    
        printf("Cos x=%f",cos);
        return 0;
}