#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>


int main1(){
	int a = 0;
	a = 'A' + 1.6;
	printf("%d", a);
	printf("%d", 'A'+ 1);
	printf("%d", 'C');

	system("pause");
	return 0;
}

# define N 10

int main() {
	int i, j, k = 0;
	int m = 0;
	// 创建数组
	int A[N] = { 0, 5, 5, 8, 5, 5, 4, 5, 7, 10 };
	printf("删除前的数组元素为：\n");
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	// 指定元素
	printf("\n请输入要删除的元素：");
	scanf("%d", &m);
	// 删除

	for (i = 0; i < N; i++) {
		if (A[i] == m) {
			for (j = i; j < N; j++) {
				A[j] = A[j + 1];  // 删除一个，每个元素先前挪动一位。
			}
			k++;
			i = 0;  // 重新遍历一次，以防重复。如； 1，5，5，5，5
		}
	}
	printf("删除后的数组有效元素个数为：%d:\n", (N - k));
	for (i = 0; i < (N - k); i++) {
		printf("%d ", A[i]);
	}
	system("pause");
	return 0;
}