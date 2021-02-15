#include<stdio.h>
int main()
{
    int i,x,prime,num,sum[48]={0},sum2=0,sum3=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&prime);
        scanf("%d",&num);
        sum[prime-1]+=num;
    }
    for(i=0;i<48;i++)
    {
        if(sum2<sum[i])
        {
            sum2=sum[i];
            sum3=i+1;
        }
    }
    printf("%d %d",sum3,sum[sum3]);
    return 0;
}
