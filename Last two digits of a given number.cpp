#include<stdio.h>
int main()
{
    int year,x;
    scanf("%d",&year);
    x=year%100;
    if (x<=9)
    {
        printf("0%d",x);
    }
    else
    {
        printf("%d",x);
    }
}
