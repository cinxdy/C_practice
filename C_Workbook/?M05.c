#include<stdio.h>

typedef struct{
    int x1,y1;
    int x2,y2;

}rect;

int check(rect r1, rect r2);

int main(){
    rect r[2];

    for(int i=0;i<2;i++){
        printf("%dth rectangle (x1,y1)\n",i+1);
        scanf("%d %d",&r[i].x1,&r[i].y1);
        printf("%dth rectangle (x2.y2)\n",i+1);
        scanf("%d %d",&r[i].x2,&r[i].y2);
    }

   if(check(r[0],r[1])) printf("겹침\n");
   else printf("안 겹침\n");

}

int check(rect r1, rect r2){
    
     if( r1.x2<r2.x1 || r1.y2>r2.y1 ||
    r2.x2>r1.x1 || r1.y2>r2.y1)
    return 0;
    else return 1;

}