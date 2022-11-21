#include <stdio.h>
#include <stdlib.h>


float a, b, c, dx = 3, x, f, i;
int x_start = 30, x_end = 100;

int main() {
	
		printf("x_start: \n");
		scanf("%d", &x_start);
		printf("x_end: \n");
		scanf("%d", &x_end);
		printf("dx: \n");
		scanf("%f", &dx);
		
		printf("a: \n");
		scanf("%f", &a);
		printf("b: \n");
		scanf("%f", &b);
		printf("c: \n");
		scanf("%f", &c);
		
		// INT: 0 2.5 5.321
		// FLOAT: 3.04 23.1 0.9321
		
		
		int A = (int) a;
		int B = (int) a;
		int C = (int) a;
		
		printf("a b c:\n");
		printf("%f %f %f \n\n", a, b, c);
		printf("  x  |  f(x) \n");
		
		for (x = x_start; x <= x_end; x ++) {
			if (c < 0 && b != 0) {
				f = a*x*x + b*b*x;
			} else if (c > 0 && b == 0) {
				f = (x+a)/(x+c);
			} else {
				f = x/c;
			}
			
			if (((A & B) | (A & C)) == 0)  {
				printf("%f  |  %d\n", x, (int)f);
			} else {
				printf("%f  |  %f\n", x, f);
			}
	}
}