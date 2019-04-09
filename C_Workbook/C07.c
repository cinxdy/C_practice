//
//  main.c
//  C07
//
//  Created by 신지영 on 2018. 8. 23..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int megabyte;
    long byte;
    int kind;
    float time;
    
    
    printf("파일 용량을 메가바이트 단위로 입력하세요.  :");
    scanf("%d",&megabyte);
    
    printf("전송방식을 1:Wi-Fi 2:BlueTooth 3:LTE 4:USB 중에서 입력하세요.  :");
    scanf("%d",&kind);
    
    byte = megabyte * 1024 * 1024;
    
    if(kind == 1) time = (float) byte / 1500000;
    else if(kind==2) time = (float) byte / 300000;
    else if(kind==3) time = (float) byte / 1000000;
    else time = (float) byte/ 60000000;
    
    printf("파일 전송 시간은 %.1f초입니다",time);

    
    
}
