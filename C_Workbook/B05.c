//
//  main.c
//  B05
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int days, seconds, m_count;
    
    printf("날수를 입력하세요.  :");
    scanf("%d",&days);
    
    seconds = days *24 * 60 *60;
    
    m_count = seconds / 1000000;
    
    printf("날수에 해당되는 기간은 모두 %d초입니다\n", seconds);
    printf("이 기간에는 백만초가 %d번 포함됩니다\n",m_count);
    
    
}
