#include <stdio.h>
#include <string.h>

int count_sum(int number) {
    int count, chr, s = 0;
	while (number != 0) {
		chr = number % 10;
		count ++;
		if (count % 2 != 0) s += chr;
		number /= 10;
	}
	printf("count: %d\n sum: %d\n", count, s);

}