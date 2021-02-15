#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    if(num==1)
        printf("1\n");
    for(i=2;num>1;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            num/=i;
            i=1;
        }
    }
    printf("0");
    return 0;
}
