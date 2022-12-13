#include <string.h>
#include <malloc.h>
#include <stdio.h>

int funct_num(int numb) {
	int m, i = 0, s = 0;
	
	while (numb > 0) {
    	i ++;
    	m = numb%10;
    
    	if (i%2 != 0) s += m;
    	
    	numb /= 10;
		
		
	}
	printf("Sum: %d\n", s);
	printf("\nCount: %d", i);
	
	return 0;	
}
 
void main()
{
    int n;
    scanf("%d", &n);
    funct_num(n);
}                   
                 