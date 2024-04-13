
#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c,s,area;
     printf("Enter the length of sides of triangle \n");
     scanf("%f%f%f",&a,&b,&c);
     s = (a+b+c)/2.0; /* s is semi-perimeter */
     if((s*(s-a)*(s-b)*(s-c))>0)
     {
     area = (sqrt)(s*(s-a)*(s-b)*(s-c));
      printf("Area of triangle =\t %f",area);
     }
     else
     printf("Invalid triangle");
     return 0;
}