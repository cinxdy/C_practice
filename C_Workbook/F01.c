#include <stdio.h>

int main(){
    int num[10];
    int first,second,second_max_index;
    int i;

    i=0;
    first=0;
    second=0;
    while(i<10){
        printf("Input %d-th number\n",i+1);
        scanf("%d",&num[i]);
        
        if(num[i]>first){
            first = num[i];
        }
        i++;
    }

    i=0;
    while(i<10){
        if(num[i]<first && num[i]>second){
            second = num[i];
            second_max_index = i;
        }
        i++;
    }

    printf("second number is %d-th %d\n",second_max_index+1,second);
}