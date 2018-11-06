#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fun(double m){
	int n;
	n = (int)m;
	return n;
}
int fun(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n-fun(n-1);
	}
}
int fac(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n*fac(n - 1);
	}
}
int main() {
	int m;
	printf("请输入一个整数:\n");
	scanf("%d", &m);
	printf("%d的阶乘为%d\n", m, fac(m));

	int s;
	s = fun(5);
	printf("%d\n", s);

	int s1, s2;
	s1 = fun(5.67);
	s2 = fun(1.23);
	printf("%d %d\n", s1, s2);


	char str[30] = "****A*B**C*EF***";
	char *p1, *p2, *q;
	int n;
	p1 = str;
	while (*p1 == '*') {
		p1++;
	}
	p2 = p1;
	n = strlen(str) - 1;
	q = str + n;
	while (*q == '*') {
		q--;
	}
	while (p1 <= q) {
		if (*p1 != '*') {
			*p2++ = *p1++;
		}
		else {
			p1++;
		}
	}
	while (*q) {
			*p2++ = *q++;
		}
	*p2 = '\0';
	puts(str);


	int a[8], *p, i;
	for (p = a; p <= a + 7; p++) {
		scanf("%d", p);
	}
	for (p = a + 7; p >= a; p--) {
		printf("%2d", *p);
	}


	char str[20] = "C Program!";
	char *p;
	for (p = str; p <= str + 9; p++) {
		putchar(*p);
	}


	int a[5][5];
	int i, j, *p, *q;
	int n = 0;
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 4; j++) {
			a[i][j] = ++n;
			printf("%d\t", a[i][j]);
		}
	}
	printf("\n");
	p = a + 2;
	q = a[3];
	printf("%d %d", *p, *(q+2));


	int m[5] = { 1, 2, 3, 4, 5 };
	int *p = &m[2];
	printf("%d %d\n", *p, *(p + 2));


	float m = 1.23;
	float *p1, *p2, *p3;
	p1 = &m;
	p2 = p1;
	p3 = NULL;
	printf("%f %p", *p2,p3);
	1.230000 00000000

	int a = 6;
	int *p;
	double f = 3.45;
	double *q;
	p = &a;
	q = &f;
	printf("%d %f\n", *p, *q);

	char s1[20], s2[20];
	char *p1, *p2;
	int i;
	p1 = s1;
	p2 = s2;
	gets(s1);
	gets(s2);
	while (*p1) {
		putchar(*p1);
		p1++;
	}
	printf("\n");
	for (i = 0; i <= strlen(s2); i++) {
		printf("%c", *(p2 + i));
		printf("\n");
	}
	system("pause");
	return 0;
}
