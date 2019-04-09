//
//  main.c
//  C06
//
//  Created by 신지영 on 2018. 8. 23..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int kor,eng,math;
    int total;
    float average;
    
    printf("국어 점수를 입력하세요.  :");
    scanf("%d" ,&kor);
    
    printf("영어 점수를 입력하세요.  :");
    scanf("%d" ,&eng);
    
    printf("수학 점수를 입력하세요.  :");
    scanf("%d" ,&math);
    
    total = kor+eng+math;
    average = total/3;
    
    printf("당신의 총점은 %d점이고 평균은 %f점입니다.\n",total,average);
    
    if( average >= 90 ) printf("수");
    else if( average >=80 ) printf("우");
    else if( average >= 70 ) printf("미");
    else if( average >=60 ) printf("양");
    else printf("가");
    
    printf( "입니다" );
    
}
