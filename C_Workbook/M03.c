#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
} point;

float calc_distance(point *p);

int main(){
    point p[2];
    for(int i=0;i<2;i++){
        printf("%dth x?",i+1);
        scanf("%f",&p[i].x);
        printf("%dth y?",i+1);
        scanf("%f",&p[i].y);
    }
    printf("distance is %.1f\n",calc_distance(p));

}

float calc_distance(point *p){
    float result;

    result = sqrt(pow(p[0].x-p[1].x,2)+pow(p[0].y-p[1].y,2));
    return result;
}