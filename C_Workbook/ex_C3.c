//
//  main.c
//  ex_C3
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    char grade ;
    
    printf( "등급을 입력하세요  :" );
    scanf(" %c", &grade);

    
   /*
    if( grade == 'A' ) printf("참 잘했어요");
    else if( grade == 'B' ) printf("잘했어요");
    else if ( grade == 'C' ) printf("좀 더 노력하세요");
    else printf("없는 등급입니다 다시 입력하세요");
    */
    
    switch(grade){
        case 'A' : printf( "참 잘했어요" );
            break;
        case 'B' : printf( "잘했어요" );
            break;
        case 'C' : printf( "좀 더 노력하세요" );
            break;
        default : printf( "없는 등급입니다 다시 입력하세요" );
            break;
    }
    
}
