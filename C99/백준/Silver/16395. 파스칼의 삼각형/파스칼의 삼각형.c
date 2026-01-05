#include<stdio.h>

int arr[31][31];
int main(void) {
	int i,j,n, k;
	scanf("%d %d", &n, &k);
	arr[1][1] = 1;
	for (i = 2; i <= n; i++) {
		arr[i][1] = 1;
		for (j = 1; j < n; j++) {
			arr[i][j] = arr[i-1][j - 1] + arr[i-1][j];
		}
		arr[i][n] = 1;
	}
	printf("%d", arr[n][k]);
    
    return 0;
}