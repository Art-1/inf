#include <stdio.h>
#include <string.h>
 
#include "strcspn2.c"

int main(void) 
{
    char s1[200] = "sasgsag";
    gets(s1);
    char s2[200] = "fd";
    gets(s2);
    printf( "StrCSpn: %d\n", StrCSpn(s1, s2));
    printf( "strcspn: %d\n", strcspn(s1, s2));
    return 0;
}