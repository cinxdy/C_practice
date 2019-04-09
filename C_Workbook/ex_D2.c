//
//  main.c
//  ex_D2
//
//  Created by 신지영 on 2018. 8. 26..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int number;
    int count=1;
    
    printf("양의 정수 하나를 입력하세요");
    scanf("%d",&number);
    
    while(number>=count){
        printf("%d ",count);
        count++;
    }
}
