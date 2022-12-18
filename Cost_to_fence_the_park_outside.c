#include<stdio.h>
int main()
{
    int l,b,w,c,a,m,f,k;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l*b);
    m=((l+2*w)*(b+2*w));
    f=(m-a);
    k=f*c;
    printf("%d",k);
}