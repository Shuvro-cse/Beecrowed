#include<stdio.h>
int main(){
    int T,i;
    while(1)
    {
    scanf("%d",&T);
    float Ti[T],min;
    for(i=0;i<T;i++)
    {
        scanf("%f",&Ti[i]);
    }
    min=Ti[0];
    for(i=1;i<T;i++)
    {
        if(min>Ti[i])
        min=Ti[i];
    }
    printf("%0.2f\n",min);
    }
    return 0;
}