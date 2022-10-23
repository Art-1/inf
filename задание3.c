#include <stdio.h>
#include <math.h>


float a, b, c, x_start, x_end, dx, x;
float f;

int main() {
	
	printf("\na: \n");
	scanf("%f", &a);
	printf("\nb: \n");
	scanf("%f", &b);
	printf("\nc: \n");
	scanf("%f", &c);
	
	printf("\ndx: \n");
	scanf("%f", &dx);
	
	printf("\nx_start: \n");
	scanf("%f", &x_start);
	
	printf("\nx_end: \n");
	scanf("%f", &x_end);
	
	if (((a && b) || (a && c)) == 0) {
			f = (float) f;
	}
	x = x_start;
	
	while (x <= x_end) {
		x += dx;
		if (((c < 0) && (b != 0)) != 0) {
			f = a * x * x + b * b * x;
		}
		else if (((c > 0) && (b == 0)) != 0) {
			f = (x + a)/(x + c);
		}
		else {
			f = x/c;
		}
		
		printf("\nf: %f", f);
	}
	
	return 0;
}