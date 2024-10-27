#include<stdio.h>
int main(){
    int n,i,pa=0,pb=0;
    while(1){
    scanf("%d",&n);
    if(n==0)
    break;
    pa=0;
    pb=0;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            pa+=1;
        }
        else if(a[i]<b[i])
        {
            pb+=1;
        }
        else if(a[i]==b[i])
        {
            continue;
        }
    }
    printf("%d %d\n",pa,pb);
    }
    return 0;
}