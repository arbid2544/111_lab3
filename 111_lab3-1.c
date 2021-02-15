#include<stdio.h>
int main()
{
    int a[4],b[4],c[4],d[4],e[4],i,s[5]={0},max=0,p;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        s[0]+=a[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&b[i]);
        s[1]+=b[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&c[i]);
        s[2]+=c[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&d[i]);
        s[3]+=d[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&e[i]);
        s[4]+=e[i];
        }
    for(i=0;i<4;i++)
    {
        for(i=0;i<4;i++){
           if(max<s[i]){
              max=s[i];
              p=i+1;}
        }
    }
    printf("%d %d",p,max);

    return 0;
}
