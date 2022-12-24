#include<stdio.h>
void tem(float b)
{
    float a;
    a=((9*b)/5)+32;
    printf("%0.2f",a);
}
int main()
{
    float b;
    scanf("%f",&b);
    tem(b);
}