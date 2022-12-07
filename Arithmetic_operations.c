#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s,d,p,q,r;
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    r=a%b;
    printf("Sum:%d
",s);
    printf("Difference:%d
",d);
    printf("Product:%d
",p);
    printf("Quotient:%d
",q);
    printf("Remainder:%d
",r);
}