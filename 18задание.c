#include <stdio.h>
#include <math.h>
#include <string.h>

int n, m, c;
int n_arr[20000], m_arr[20000];

int main() {
	printf("n: \n");
	scanf("%d", &n);
	printf("m: \n");
	scanf("%d", &m);
	
	for (int i = 2; i <= sqrt(n);i++) {
		if (n % i == 0) {
			n_arr[i-1] = i;
			n_arr[i-1] = n / i;
		}
	}
	
	for (int i = 2; i <= sqrt(m);i++) {
		if (m % i == 0) {
			m_arr[i-1] = i;
			m_arr[i-1] = m / i;
		}
	}
	
	for (int i = 0; i < sizeof(n_arr);i++) {
		for (int j = 0; j < sizeof(m_arr);j ++) {
			if (n_arr[i] == m_arr[j]) {
				c = 1;
				break;
			}
		}
	}
	
	if (c != 1) {
		printf("Yes");
	}
}