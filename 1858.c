#include<stdio.h>
int main(){
    int i,n,min=0,pos;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min= a[0];
    for(i=0;i<n;++i)
    {
        if(min>a[i])
        {
            min=a[i];
            pos=i+1;
        }
    }
    printf("%d\n",pos);
    return 0;
}