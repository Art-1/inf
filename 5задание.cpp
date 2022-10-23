#include <stdio.h>
#include <math.h>
 
int main()
{
    double x;
    printf("x=");
    scanf("%lf", &x);
    
    int n;
    printf("n=");
    scanf("%d", &n);
 
    double element = sin(x);
    double S = element;
 
    for (int i = 1; i < n; i++)
    {
        element = sin(element);
        S += element;
    }
    printf("Result = %lf\n", S);
    return 0;
}