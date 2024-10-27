#include<stdio.h>
int main(){
    int a,s,d,f,g;
    scanf("%d%d%d%d%d",&a,&s,&d,&f,&g);
    if(a>=s && s>=d && d>=f && f>=g)
    printf("D\n");
    else if (a<=s && s<=d && d<=f && f<=g)
    {
        printf("C\n");
    }
    else
    printf("N\n");
    return 0;
}