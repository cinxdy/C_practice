#include <stdio.h>

int main(){
    float score[10];
    float max=0,min=0;
    float total=0;
    float average;
    int i;

    i=0;
    while(i<10){
        printf("Input %d-th point\n",i+1);
        scanf("%f",&score[i]);
        i++;
    }

    max=score[0];
    min=score[0];
    i=1;
    while(i<10){
        if(score[i]>max){
            max = score[i];
        }
        if(score[i]<min){
            min = score[i];
        }
        total += score[i];
        i++;
    }

    average = (total-min-max) / 8;

    printf("average without max and min is %f\n",average);
}