#include<stdio.h>
int main(){
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=i*i,k=i*j;j<=(i*i)+1;j++,k++)
        {
            printf("%d %d %d\n",i,j,k);
        }
    }
    return 0;
}