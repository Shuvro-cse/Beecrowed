#include<stdio.h>
int main(){
    int M,N,sum,i,temp;
    while(1){scanf("%d%d",&M,&N);
    if(M<=0 || N<=0)
    break;
    if(M>N)
    {
        temp=M;
        M=N;
        N=temp;
    }
    sum=0;
    for(i=M;i<=N;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("Sum=%d\n",sum);}
    return 0;

}