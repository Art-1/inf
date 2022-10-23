#include <stdio.h>
#include <math.h>

int n;
float s, res, x;

int main() {
	printf("n: \n");
	scanf("%d", &n);
	printf("x: \n");
	scanf("%f", &x);
	
	res = sin(x);
	
	for (int i; i <= n; i ++) {
		for (int j; j <= n; j ++) {
			res = sin(res);
		}
		s += res;
	}
	
	printf("%f", s + sin(x));
}