#include<stdio.h>
int main()
{
    long num,i;
    scanf("%d",&num);
    for(i=2;num>1;i++)
    {
        if(num%i==0)
        {
            num%=i;
            i=1;
        }
    }
    if(num!=0)
        printf("A");
    return 0;
}
