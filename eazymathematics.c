#include<stdio.h>

int main() {
	int x = 0, y = 0;
	printf("請輸入一個整數:");
	scanf("%d", &x);
	y = (x + 100) / 2;
	printf("%d \n", y);
	getchar();

	return 0;
}
