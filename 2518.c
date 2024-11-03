#include<stdio.h>
#include<math.h>
int main(){
    int n,H,C,L;
    float area,th,h;
    while(scanf("%d",&n) != EOF){
        scanf("%d%d%d",&H,&C,&L);
        h=sqrt(pow(H,2)+pow(C,2));
        th=h*n;
        area= (th*L)/10000;
        printf("%.4f\n",area);
    }
    return 0;

}