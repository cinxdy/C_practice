#include<stdio.h>

int main(){
    int number[5][3];
    int total=0;
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("Input %d0%d ho person number>>",i+1,j+1);
            scanf("%d",&number[i][j]);
            total+=number[i][j];
        }
    }

    printf("total person >>> %d\n",total);
}