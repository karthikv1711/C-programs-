#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[20], s2[20];
    printf("Enter a string");
    scanf("%s%s",s1,s2);
    if(strcmp(s1,s2)==0)
    printf("The given string are equal");
    else 
    printf("The given strings are not equal");
    return 0;
}