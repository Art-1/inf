#include <string.h>
#include <stdio.h>

int count_sum(int number, int count_n);

void main() {
    int num, c_n;
	scanf("%d", &num);
	scanf("%d", &c_n);
	count_sum(num, c_n);
}

int count_sum(number, count_n) {
    int count, chr, s = 0;
	while (number != 0) {
		chr = number % 10;
		count ++;
		if (count % 2 != 0) s += chr;
		number /= 10;
		if (count >= count_n) {
            printf("Limit\n");
            break;
		}
	}
	printf("count: %d\n sum: %d\n", count, s);

}
