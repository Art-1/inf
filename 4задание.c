#include <stdio.h>
#include <math.h>

int x, n;
float s;

int main() {
	printf("n: \n");
	scanf("%d", &n);
	printf("x: \n");
	scanf("%d", &x);
	
	for (int i = 0; i < n; i ++) {
		if (-1 < x <= 1) {
			s += (pow(-1, n)*pow(x, n+1))/(n+1);
		}
	}
	printf("s: %f", s);
}