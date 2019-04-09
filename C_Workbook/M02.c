#include<stdio.h>

typedef struct{
    int width;
    int height;

}rectangle;

int calc_area(rectangle rect);
int calc_boundary(rectangle rect);

int main(){
    rectangle r;
    
    printf("width?\n");
    scanf("%d",&r.width);
    printf("height?\n");
    scanf("%d",&r.height);

    printf("area is %d, and round is %d\n",calc_area(r),calc_boundary(r));
}


int calc_area(rectangle rect){
    return rect.width*rect.height;
}
int calc_boundary(rectangle rect){
    return 2*(rect.width+rect.height);
} 