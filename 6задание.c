#include <stdio.h>

int n, count, i, j;

int main() {
    printf("n: \n");
    scanf("%d", &n);
    int a[n][n];

        for ( i = 0; i < n; i++ )
        {
            for ( j = 0; j < n; j++ )
                {
                    a[ i ][ j ] = n - i + j;
                }
        }

    for (i = 0; i < n; i ++) {
        for (j = 0; j < n; j ++) {
            if (a[i][j] > n) {
                a[i][j] = 0;
            }
            printf(" %d ", a[i][j]);
        }; printf("\n");
    }
    return 0;
}
