#include <stdio.h>
#include <math.h>

int NOD(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main(){
    int a, b;
    printf("Enter a and b: \n");
    scanf("%d %d", &a, &b);
    
    if (NOD(a, b) == 1) {
    	printf("Yes");
	} else {
		printf("No");
	}
    
    return 0;
}