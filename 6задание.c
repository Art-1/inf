#include <stdio.h>

int n, count;

int main() {
	printf("n: \n");
	scanf("%d", &n);
	
	int a[n][n];
	
	for (int i=0; i<=n; i++){
		for (int j=0;j <= n; j ++) {
			if (i == j) a[i][j] = n;
			else if ((j > 0) && ((a[i][j - 1] == n) || (a[i][j - 1] == 0))) a[i][j] = 0;
			else a[i][j] = count;
			count += 1;
			                     -= i
			                     
	
	for (int i = 0; i <= n; i ++) {
		//a[i][n] = 0;	; j <= n; j ++)
	 for (int j = 0	printf("\n");  
	
		
	               
	                              
	                              
}