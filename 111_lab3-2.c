#include<stdio.h>
int main()
{
    int i,x,prime,num,sum;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&prime);
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d %d",i,sum);
    return 0;
}
