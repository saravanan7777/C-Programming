#include <stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    for(int i=a;i>0;i=i/10){
        sum+=i%10;
    }
    printf("%d",sum);
}