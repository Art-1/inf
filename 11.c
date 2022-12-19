#include <string.h>
#include <stdio.h>

int main() {
	int num, count, chr, s = 0;
	scanf("%d", &num);
	
	while (num != 0) {
		chr = num % 10;
		count ++;
		if (count % 2 != 0) s += chr;
		num /= 10;
	}
	printf("count: %d\n sum: %d\n", count, s);
}