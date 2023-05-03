#include <stdio.h>
#include <string.h>

void main() {
	char value[250],
	value_res[250];
	puts("\nWrite the string \n"); gets(value);
	char * val_char;
	int len_val = strlen(value);
	printf("%s", len_val);
	printf("%d", len_val);
	return 0;
}