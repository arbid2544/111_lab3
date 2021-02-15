#include<stdio.h>
int main()
{
    int a[4],b[4],c[4],d[4],e[4],i,s1=0,s2=0,s3=0,s4=0,s5=0;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        s1+=a[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&b[i]);
        s2+=b[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&c[i]);
        s3+=c[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&d[i]);
        s4+=d[i];
        }
    for(i=0;i<4;i++){
        scanf("%d",&e[i]);
        s5+=e[i];
        }
    printf("%d %d %d %d %d",s1,s2,s3,s4,s5);

    return 0;
}
