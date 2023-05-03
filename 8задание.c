#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char *str;
    char *astr;
    char str_r[200] = "a arks as ksk ak safsaaf sa fsa";
    gets(str_r);
    str = strtok(str_r, " ");

    //str = (char*) malloc(strlen(str));

    int crr_int = 107;
    while (str != NULL)
   {
		astr = strchr(str, crr_int);
    	if (astr != NULL) printf ("%s\n",str);
    	str = strtok (NULL, " ");
   }
   puts(str);
}