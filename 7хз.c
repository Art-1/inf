#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	const int n, m;
	int i, j, c, k;
	int *p = NULL;
	
	printf("n: \n");
	scanf("%d", &n);
	printf("m: \n");
	scanf("%d", &m);
	
	int arr[n][m];
	p = (int*) malloc(m);
	
	for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < m; j++ ) {
                arr[i][j] = rand()%10;
        }
    }
    
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < m; j++ ) {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("\n");
    
    for(c = 0 ; c < n; c++) {
    	p = arr[c];
    	for(i = 0 ; i < n - 1; i++) {
    		for(j = 0 ; j < m - i - 1 ; j++) {  
	        	if(p[j] > p[j+1]) {
		            int tmp = p[j];
		            p[j] = p[j+1];
		            p[j+1] = tmp;
	        	}
	    	}
		}
	    
	    for (int k = 0; k < m; k++) {
	    	printf(" %d ", p[k]);
		}
		printf("\n");
		free(p);
		
	    
	}
	_getch();
}
	