#include <stdio.h>
#include <string.h>

int StrLen(char *);
int StrCSpn(char *, char *);
 
int main(void) {
    char s1[200] = "sasgsag";
    gets(s1);
    char s2[200] = "fd";
    gets(s2);
    printf( "StrCSpn: %d\n", StrCSpn(s1, s2));
    printf( "strcspn: %d\n", strcspn(s1, s2));
    return 0;
}

int StrLen(char *str) {
	char *s;
    for (s = str; *s; ++s);
    return(s - str);
}
 
int StrCSpn(char *s1, char *s2) {
    int len1 = StrLen(s1);
    int len2 = StrLen(s2);
    int i;
    for (i=0; i<len1; i++)
        for (int j=0; j<len2; j++)
            if (s1[i] == s2[j]) return i;
    return i;
}