#include<stdio.h>
int main(){
    int n[100],i,highst,position;
    for(i=0;i<100;i++)
    {
        scanf("%d",&n[i]);
    }
    highst=0;
    for(i=0;i<100;i++)
    {
        if(n[i]>highst)
        {highst=n[i];
        position=i+1;}
    }
    printf("%d\n",highst);
    printf("%d\n",position);

    return 0;
}