#include <stdio.h>
#include <math.h>

float a, b, c, f;
int dx;

int main() {
	
	printf("a: \n");
	scanf("%f", &a);
	
	printf("\nb: \n");
	scanf("%f", &b);
	
	printf("\nc: \n");
	scanf("%f", &c);
	
	printf("\ndx: \n");
	scanf("%f", &dx);
	
	if ((a*b != 0) || (a*c != 0)) {
		int x_start, x_end;
		
		printf("\nx_start: \n");
		scanf("%d", &c);
		
		printf("\nx_end: \n");
		scanf("%d", &dx);
		
		for (int x = x_start; x <= x_end; x + dx) {
			if ((c < 0) && (b != 0)) f = a*x*x + b*b*x;
			else if ((c > 0) && (b == 0)) f = (x + a) / (x + c);
			else f = x/c;
		}
		
	} else {
		float x_start, x_end;
		
		printf("\nx_start: \n");
		scanf("%f", &c);
		
		printf("\nx_end: \n");
		scanf("%f", &dx);
		
		for (float x = x_start; x <= x_end; x + dx) {
			if ((c < 0) && (b != 0)) f = a*x*x + b*b*x;
			else if ((c > 0) && (b == 0)) f = (x + a) / (x + c);
			else f = x/c;
		}
	}
	
	printf("f: %f", f);
}
	
	