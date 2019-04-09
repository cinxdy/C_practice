#include <stdio.h>

typedef struct{
    int x[2],y[2];
    int area;
} rect;

int calc_area(rect r);

int main(){
    rect r[2];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%dth rect?(x%d,y%d)\n",i+1,j+1,j+1);
            scanf("%d %d",&r[i].x[j],&r[i].y[j]);
        }
    }

    for(int i=0;i<2;i++){
        r[i].area = calc_area(r[i]);
        printf("%dth rect area = %d\n",i+1,r[i].area);
    }

    if(r[0].area>r[1].area) printf("첫번째 직사각형이 더 큼\n");
    else printf("두번째 직사각형이 더 큼\n");


}

int calc_area(rect r){
    return (r.x[1]-r.x[0])*(r.y[1]-r.y[0]);
}
