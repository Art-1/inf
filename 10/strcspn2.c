#include <stdio.h>
#include <string.h>

#include "strlen.c"

int StrCSpn(const char *s1, const char *s2) 
{
    int len1 = StrLen(s1);
    int len2 = StrLen(s2);
    int i;
    for (i=0; i<len1; i++)
        for (int j=0; j<len2; j++)
            if (s1[i] == s2[j]) return i;
    return i;
}