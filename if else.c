#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,sum;
    float p;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    p=(float)sum/500*100;
    printf("%f\n",p);
    if(p>90)
    printf("A grade");
    else if(p>80)
    printf("B grade");
    else if(p>70)
    printf("C grade");
    else if(p>60)
    printf("D grade");
    else if(p>40)
    printf("E grade");
    else
    printf("F grade");
        return 0;
}