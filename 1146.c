#include<stdio.h>
int main(){
    int i,n;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        
        if(n==0)
        break;
        
        for(i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",i);
        }
    return 0;
}