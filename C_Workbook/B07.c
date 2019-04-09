//
//  main.c
//  B07
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int megabyte,byte;
    char usb2;
    float time;
    
    printf("파일 용량을 메가바이트 단위로 입력해주세요.  :");
    scanf("%d",&megabyte);
    
    byte = megabyte * 1024 * 1024;
    
    printf("USB 2.0입니까? Y or N   :");
    scanf(" %c",&usb2);
    
    if(usb2 == 'Y') time = byte / 60000000;
    
    
    else time = byte / 1500000;
    
    
    printf("해당 파일을 전송하는데 걸리는 시간은 %f초입니다.", time);
    
    
    
}
