#include<stdio.h>
int main()
{
    int num,n,sum=0,i;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum += i;
        }
    }
        if(sum == num)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
}