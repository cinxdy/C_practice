//
//  main.c
//  ex_C2
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int a,b ;
    
    printf("두 수를 입력하세요(띄어쓰기로 구분)   :");
    scanf("%d %d",&a,&b);
    
    if(a>b) printf("첫번째 수가 두번째 수보다 큽니다");
    else if(a<b) printf("두번째 수가 첫번째 수보다 큽니다");
    else printf("두 수는 같습니다");
    
    
}
