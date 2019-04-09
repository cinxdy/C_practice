//
//  main.c
//  A05
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int days, seconds;
    
    printf("변환 할 날수를 입력하세요");
    scanf("%d",&days);
    seconds = days*24*60*60;
    
    printf("%d일은 %d초 입니다", days,seconds);
    
    
    
}
