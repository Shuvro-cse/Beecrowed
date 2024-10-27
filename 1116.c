#include<stdio.h>
int main(){
        int i,n;
        int x,y;
        float res;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x,&y);
            res= (float)x/(float)y;
            if(y==0)
            printf("divisao impossivel\n");  
            else
            printf("%0.1f\n",res);
        }
    return 0;
}