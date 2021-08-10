#include<stdio.h>
int a[1000][1000];
int x;
int i, j;
int main() {
	scanf_s("%d", &x);
	for (i = 0; i < x; i++) {
		for (j = 0; j < x; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < x; i++) {
		for (j = 0; j < x; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}

	return 0;
}