#include<stdio.h>
int main()
{
    long num,i,j=1,ber,x=0;
    scanf("%d",&num);
    ber=num;
    int a[num];
     for(i=2;num>1;i++,j++)
    {
        if(num%i==0)
        {
            //printf("%d\n",i);
            a[j]=i;
            if(a[j]==a[j-1]){
                printf("%d is not a lukky number",ber);
                x=1;
                break;

                }
            num/=i;
            i=1;
        }
    }
    if(x==0)
        printf("%d is a lukky number",ber);
    return 0;
}
