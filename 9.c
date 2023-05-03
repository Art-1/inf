#include <string.h>
#include <stdio.h>

void main() {
	
	char str[200] = "f";
	char *str_r;
	char new_str[200] = "";
	gets(str);
	
	str_r = strtok(str, " ");
	
	for (int i = 0; i < strlen(str_r); i ++) {
		new_str[0] = str_r[i];
		puts(new_str);
	}
}