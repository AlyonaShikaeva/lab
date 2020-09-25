#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, S, P;
	printf("Введите стороны прямоугольника\n");
	scanf("%d", &a);
	scanf("%d", &b);
	S = a * b;
	printf("Площадь прямоугольника=%d\n", S);
	P = 2 * (a + b);
	printf("Периметр прямоугольника=%d\n", P);
	return 0;
}
