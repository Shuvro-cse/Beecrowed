#include<stdio.h>
int main(){
    int x,n,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    scanf("%d",&n);
    if(n==0)
    printf("NULL\n");

    else if(n%2==0)
    {
        if(n>0)
        printf("EVEN POSITIVE\n");
        else
        printf("EVEN NEGATIVE\n");
    }
    else
    {
        if(n>0)
        printf("ODD POSITIVE\n");
        else
        printf("ODD NEGATIVE\n");
    }

    }
    return 0;
}