#include <stdio.h>

int main(){
    
    int number=0; int count=0; int totalsum=0; float average=0.0;

    do{
    printf("input number:");
    scanf("%d",&number);
    count++;
    totalsum= totalsum + number;
    }while(0<number && number<100);

    average = totalsum/count;
    printf("count = %d, totalsum = %d, average = %.2f", count, totalsum, average);
}
