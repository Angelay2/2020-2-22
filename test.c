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
	// ��������
	int A[N] = { 0, 5, 5, 8, 5, 5, 4, 5, 7, 10 };
	printf("ɾ��ǰ������Ԫ��Ϊ��\n");
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	// ָ��Ԫ��
	printf("\n������Ҫɾ����Ԫ�أ�");
	scanf("%d", &m);
	// ɾ��

	for (i = 0; i < N; i++) {
		if (A[i] == m) {
			for (j = i; j < N; j++) {
				A[j] = A[j + 1];  // ɾ��һ����ÿ��Ԫ����ǰŲ��һλ��
			}
			k++;
			i = 0;  // ���±���һ�Σ��Է��ظ����磻 1��5��5��5��5
		}
	}
	printf("ɾ�����������ЧԪ�ظ���Ϊ��%d:\n", (N - k));
	for (i = 0; i < (N - k); i++) {
		printf("%d ", A[i]);
	}
	system("pause");
	return 0;
}