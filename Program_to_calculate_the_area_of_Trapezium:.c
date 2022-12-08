#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float t;
    t=((a+b)*h)/2.0;
    printf("%0.4f",t);
}