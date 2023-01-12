#include<stdio.h>
int main()
{
    int i,n,m,s=0,j;
    long fact;
    scanf("%d",&n);
    m=n;
    for(j=n;j>0;j=j/10)
    {
        fact=1;
        for(i=1;i<=j%10;i++)
    {
        fact=fact*i;
    }
    s=s+fact;
}
if(s==m)
{
    printf("The number %d is a strong number",m);
}
else
{
    printf("The number %d is not a strong number",m);
}
}