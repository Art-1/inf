#include <stdio.h>
#include <string.h>

int StrLen(const char *str)
{
	const char *s;
    for (s = str; *s; ++s);
    return(s - str);
}