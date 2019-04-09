
#include <stdio.h>

int main(void) {
  
   int month, day ;
    int day_count;
    int month_day;
    
    //월 일 입력받기
    printf("Month? \n");
    scanf("%d",&month);
     printf("Day? \n");
    scanf("%d",&day);
    
    //반복문으로 다 더하기
    for(int i=1 ; i<=month ; i++){
    if(i == 2) month_day = 28;
    else if( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i ==12)
        month_day = 31;
    else month_day = 30;

    day_count = day_count + month_day;
    }
    
    day_count = day_count - month_day + day;
    
    if(day<=month_day)
    printf("이 날짜는 1년 중 %d번째 날에 해당됩니다.",day_count );
    else printf("잘못 입력하셨습니다.");
  
  return 0;
}
