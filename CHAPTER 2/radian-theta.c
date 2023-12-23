#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    float r=sqrt(x*x+y*y);
    float theta=atan(y/x);
    printf("%f  %f",r,theta);
}