#include<stdio.h>
int main(){
    int L,C,sum;
    scanf("%d%d",&L,&C);
    sum=L+C;
    if(sum%2==0)
    printf("1\n");
    else
    printf("0\n");
    return 0;
}