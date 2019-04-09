//
//  main.c
//  A07
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    
    float gigabyte,megabyte,kilobyte,byte;
    
    printf("파일 용량을 기가바이트 단위로 입력하세요   :");
    scanf("%f",&gigabyte);
    
    megabyte=gigabyte*1024;
    kilobyte=megabyte*1024;
    byte=kilobyte*1024;
    
    printf("입력하신 파일 용량은 %.1fMB,%.1fKB,%.f1B 입니다", megabyte,kilobyte,byte);
    
    
    
}
