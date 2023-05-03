#include <stdio.h>
#include <stdlib.h>

int n, m, count, i, j;

int main() {
    printf("n: \n");
    scanf("%d", &n);
    printf("m: \n");
    scanf("%d", &m);
    
    int a[n][m];

    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < m; j++ ) {
                a[ i ][ j ] = 1 + rand()%(10 - 1);
        }
    }
    
    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j ++) {
            printf(" %2.d ", a[i][j]);
        }; printf("\n");
    }
    printf("\n");
    
    int q;
    for (int len = 0; len < n; len ++) {
    	for (i = 0; i < n - 1; i ++) {
	    	for (j = 0; j < n - i - 1; j ++) {
	    		if (a[len][j] > a[len][j + 1]) {
	    			q = a[len][j];
	    			a[len][j] = a[len][j + 1];
	    			a[len][j + 1] = q;
				}
			}
		}
	}
    

    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j ++) {
            printf(" %2.d ", a[i][j]);
        }; printf("\n");
    }
    return 0;
}