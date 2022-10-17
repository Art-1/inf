#include <stdio.h>
#include <math.h>

int x, y;

int main() {
	
	printf("x: \n");
	scanf("%d", &x);
	
	printf("\ny: \n");
	scanf("%d", &y);
	
	int square = (-2 <= x && x <= 6) && (-6 <= y && y <= 2);
	
	int a_square_mini = (0 <= x && x <= 6) && (0 <= y && y <= 2);
	
	int round_1_el = (x*x) + (y*y) <= 4 && x >= 0 && y >= 0;
	int a_round_1 = (x*x) + (y*y) <= 4;
	
	int round_big_2_el = (x*x) + (y*y) <= 16 && x >= 0 && y <= 0;
	int a_round_large_2_el = (x*x) + (y*y) <= 36;
	
	
	
	if (square) {
		if ( round_1_el || (round_big_2_el && a_round_1 == 0) || (a_round_large_2_el == 0 && a_round_1 == 0 && (a_square_mini == 0))  ) {
			printf("%d %d", x, y);
		}
	}

	
	return 0;
}