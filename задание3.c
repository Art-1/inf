#include <stdio.h>
#include <stdlib.h>


float a, b, c, x_start = 30, x_end = 100.0, dx = 3, x, f, i;

int main() {
	
	//srand(time(NULL));
	for (i = 0; i <= 200; i++) {
		a = rand()%100;
		b = rand()%100;
		c = rand()%100;
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
			
			if (((a && b) || (a && c)) == 0)  {
				printf("%f  |  %d INT\n", x, (int)f);
			} else {
				printf("%f  |  %f\n", x, f);
			}
		}
	}
}