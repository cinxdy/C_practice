//
//  main.c
//  ex_B
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int apple_count;
    int box_count;
    
    printf("사과의 개수를 입력하세요   :");
    scanf("%d",&apple_count);
    
    box_count = apple_count/30;
    
    if(apple_count>30){
        printf("한 박스에 담을 수 없습니다\n");
        printf("총 %d박스와 %d개입니다\n",box_count,apple_count-box_count*30);
    }
    
    else{
        printf("한 박스에 담을 수 있습니다\n");
        printf("총 %d개입니다\n",apple_count);
    }
    
}
