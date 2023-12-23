#include <stdio.h>

int main(){
    int a,b,tmp;
    a,b=1189,841;
    for(int i=0;i<9;i++){
        printf("A%d Size : %dmm x %dmm\n",i,a,b);
        tmp=a;
        a=b;
        b=tmp/2
    }
    retrun 0;
}