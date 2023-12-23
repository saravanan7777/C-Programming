#include<stdio.h>

int main(){
    int tempFr;
    pritnf("Enter the temperature in Fahrenheit : ");
    scanf("%d",tempFr);
    printf("Temperature in Celsius : %d",(tempFr-32)*(5/9));
    return 0;
}