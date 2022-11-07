#include <stdio.h>
#include <stdlib.h>
 
int cmp(const void *a, const void *b) {
    return *((const int *) a) - *((const int *) b);
}
 
int main() {
    int n, m;
    printf("n: \n");
    scanf("%d", &n);
    printf("m: \n");
    scanf("%d", &m);
    int arr[128][128];
    
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < m; j++ ) {
                arr[i][j] = 1 + rand()%(10 - 1);
        }
    }
    
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            printf("%2.d ", arr[i][j]);
        }; printf("\n");
    }
    printf("\n");
    
    for (int y = 0; y < n; y++)
        qsort(arr[y], m, sizeof (int), &cmp);
    
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++)
            printf("%2.d ", arr[y][x]);
        printf("\n");
    }
    return 0;
}