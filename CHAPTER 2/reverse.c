#include <stdio.h>
#include <math.h>
int main(){
    int a,c=0,rev=0;
    scanf("%d",&a);
    for(int i=a;i>0;i=i/10){
        c+=1;
    }
    c=pow(10,c-1);
    for(int i=a;i>0;i=i/10){
       rev+=c*(i%10);
       c=c/10;
    }
    printf("%d",rev);
}