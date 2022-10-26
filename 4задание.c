#include <stdio.h>
#include <math.h>

int x, n;
float s;

int main() {
	printf("n: \n");
	scanf("%d", &n);
	printf("x: \n");
	scanf("%d", &x);
	
	for (int i = 1; i <= n; i ++) {
		if (-1 < x <= 1) {
			int p_m = i % 2 == 0 ? -1 : 1;
			x *= x;
			s += (-1)*p_m*x/(i+1);
		}
	}
	printf("s: %f", s);
}