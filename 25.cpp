#include <stdio.h>
#define NUM  5
 
typedef struct {
    int x, y;
} point;
 
int distance(const point* a, const point* b){
    int dx = a->x - b->x;
    int dy = a->y - b->y;
    return dx*dx + dy*dy;
}
 
int main(void){
    int    i, j, m, d;
    point* p1, *p2;
 
    point ds[NUM] = {
        {50,145}, {10,145}, {110,112}, {117,19}, {130,120}
    };
 
    p1 = p2 = &ds[0];
    m  = 0;
    for(i = 0; i < NUM; ++i){
        for(j = i + 1; j < NUM; ++j){
            if((d = distance(&ds[i], &ds[j])) > m){
                m  = d;
                p1 = &ds[i];
                p2 = &ds[j];
            }
        }
    }
 
    if(p1 != p2)
        printf("%d,%d <-> %d,%d\n", p1->x, p1->y, p2->x, p2->y);
    getchar();
    return 0;
}