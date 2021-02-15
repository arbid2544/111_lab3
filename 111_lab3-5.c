#include<stdio.h>
int main()
{
    long num,i,j=1,ber,x=0;
    scanf("%d",&num);
    ber=num;
    int a[num];
    a[1]=0;
     for(i=2;num>1;i++,j++)
    {
        if(num%i==0)
        {
            a[j]=i;
            if(a[j]==a[j-1])
                x=100;
            num/=i;
            i=1;
            x+=1;
        }
    }
    if(x==3)
        printf("%d is a Lukky Number.",ber);
    else
        printf("%d is not a Lukky Number.",ber);

    return 0;
}
