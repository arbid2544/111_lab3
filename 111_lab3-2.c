#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    int prime[x],num[x],sum[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&prime[i]);
        scanf("%d",&num[i]);
        sum[i]+=num[i];
    }
    printf("%d %d",i,sum[1]);
    return 0;
}
