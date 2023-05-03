#include <string.h>
#include <stdio.h>

int count_sum(int number) {
    int count, chr, s = 0;
	while (number != 0) {
		chr = number % 10;
		count ++;
		if (count % 2 != 0) s += chr;
		number /= 10;
	}
	printf("count: %d\nsum: %d\n", count, s);

}

void main() {
    int num;
	scanf("%d", &num);
	count_sum(num);
}