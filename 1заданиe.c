#include <stdio.h>
#include <math.h>

float z1, z2, x, p, q;

int main() {
	printf("p: \n");
	scanf("%f", &p);
	printf("q: \n");
	scanf("%f", &q);
	x = p*M_PI/q;
	z1 = 1 - 1/4 * sin(2*x)*sin(2*x) + cos(2*x);
	z2 = cos(x)*cos(x) + cos(x)*cos(x)*cos(x)*cos(x);
	printf("z1: %f \nz2: %f", z1, z2);
}