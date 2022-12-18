#include<stdio.h>
int main()
{
    int m,n,i,cou;
    scanf("%d%d",&m,&n);
    cou=0;
    for(i=m;i<=n;i++)
    {
        if(i%2==0&&i%3==0)
        {
            cou++;
        }
    }
    printf("%d",cou);
}