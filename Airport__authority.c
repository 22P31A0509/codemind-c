#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if (a[i]>t)
        c++;
    }
    printf("%d",n+c);
}