#include <stdio.h>
#include <math.h>

int x, y;

int main() {
	
	printf("x: \n");
	scanf("%d", &x);
	
	printf("\ny: \n");
	scanf("%d", &y);
	
	int square = (-2 <= x && x <= 6) && (-6 <= y && y <= 2);
	int a_round_center = (((x*x) + (y*y)) <= 4);
	int round_center_3position = (((x*x) + (y*y)) <= 16) && (x >= 0 && y <= 0);
	int a_big_round_3position = (x >= 0 && y <= 0) && (((x*x) + (y*y)) <= 36);
	int a_square_1position = (0 <= x && x <= 6) && (0 <= y && y <= 2);
	
	int A = (a_round_center && ((0 <= x && x <= 2) && (0 <= y && y <= 2)));
	int B = A && a_square_1position;

	if (square) {
		if (A || B) printf("True");
		else printf("false");
	
	}
	
	return 0;
}