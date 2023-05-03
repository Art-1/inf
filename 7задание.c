#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void bubble(int*Arr, int size);
 
int main()
{
   int n=0, m=0;
   printf("Enter n: ");
   scanf("%d", &n);
   printf("Enter m: ");
   scanf("%d", &m);
   int Arr[n][m];
   for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < m; j++ ) {
                Arr[i][j] = 1 + rand()%(10);
        }
    }
   printf("Before sort\n");
   
   for (int j = 0; j < n; j++) {
		for(int i=0; i<m; ++i) {
			printf("%2.d", &Arr[i][j]);
		}
	    	
	    printf("\n");
	}
   bubble(Arr, n);
   printf("\nAfter sort\n");
   for(int i=0; i<n; ++i)
      printf("%d ", Arr[i]);
   return 0;
}
 
void bubble(Arr[n][m], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=i; j<n; ++j)
        {
            if(Arr[i]>Arr[j])
            {
               int temp=Arr[i];
               Arr[i]=Arr[j];
               Arr[j]=temp;
            }
        }
    }
}