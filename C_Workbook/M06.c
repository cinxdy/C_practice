#include <stdio.h>

struct menu{
  int no; // 메뉴번호 
  char name[20]; // 메뉴명 
  char madein[20]; // 원산지 
  int price; // 가격 
};

int main(void) {
  struct menu mymenu[5] = { 
     {1,"삼겹살","국내산",9000}, 
     {2,"갈비살","미국산",15000}, 
     {3,"꽃등심","국내산",30000}, 
     {4,"양념갈비","호주산",25000},
     {5,"차돌박이","국내산",28000}
  };

  FILE *fp = NULL;
  fp = fopen("menu.txt", "wt");
  
  //파일 쓰기
  fprintf(fp,"메뉴번호 \t 메뉴이름 \t 원산지 \t 1인분 가격\n");
  fprintf(fp,"----------------------------------------------------\n");
  for(int i=0;i<5;i++)
    fprintf(fp,"%d \t %s \t %s \t %d \n", mymenu[i].no, mymenu[i].name,mymenu[i].madein,mymenu[i].price);
  fclose(fp);

  //출력
  printf("메뉴번호 \t 메뉴이름 \t 원산지 \t 1인분 가격 \n");
  for(int i=0;i<5;i++)
    printf("%d  \t  %s  \t %s \t %d \n", mymenu[i].no,mymenu[i].name,mymenu[i].madein,mymenu[i].price);

  return 0;
}