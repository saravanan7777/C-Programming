#include <stdio.h>

int main(){
    int markSum=0;
    int mark;
    for (int i=0;i<5;i++){
        scanf("Enter the mark : %d",&mark);
        markSum=markSum+mark;
    }
    printf("Aggregatge mark : %d \n",markSum);
    printf("Mark Percentage : %f%%", markSum/500);
    return 0;
}