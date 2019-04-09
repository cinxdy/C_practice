#include <stdio.h>

int main(){

    int number=0; int totalsum=0; int i=0;
    printf("input number:");
    scanf("%d",&number);

    if(number>0){
        for ( i = 1; i<=number;i++){
            totalsum = totalsum+i;
        }

    printf("%d",totalsum);
    }

    else printf("wrong number");


}