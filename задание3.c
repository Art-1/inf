#include <stdio.h>
#include <stdlib.h>


float a, b, c, x_start = 30, x_end = 100.0, dx = 3, x, f, i;

int main() {

	//srand(time(NULL));
	//for (i = 0; i <= 200; i++) {
		//a = rand()%100/10.0;
		a = 3.8;
		//b = rand()%100/10.0;
		b = 2.3;
		//c = rand()%100/10.0;
		c = 4.2;
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
		//}
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

float a, b, c, dx = 3, f, i;
int x_start = 30, x_end = 100;

int funct(a, b, c) {
    int k;

    for (int x = x_start; x <= x_end; x +dx) {
        if (c < 0 & b != 0) {
            f = a*x*x + b*b*x;
        } else if (c > 0 & b == 0) {
            f = (x+a)/(x+c);
        } else {
            f = x/c;
        }

        printf("%d    |   %d\n", x, (int)f);


    }
}

int main() {
    printf("a: \n");
    scanf("%f", &a);
    printf("b: \n");
    scanf("%f", &b);
    printf("c: \n");
    scanf("%f", &c);

    funct(a, b, c);
}

