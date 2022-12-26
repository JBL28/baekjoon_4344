#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double num, num2, sum, count;
	double temp[1010];
	scanf("%lf", &num);
	for (int i = 1; i <= num; i++) {
		sum = 0;
		scanf("%lf", &num2);
		for (int j = 1; j <= num2; j++) {
			scanf("%lf", &temp[j]);
			sum = sum + temp[j];
		}
		sum = sum / num2;
		count = 0;
		for (int j = 1; j <= num2; j++) {
			if (temp[j] > sum)
				count++;
		}
		printf("%.3lf%%\n", count / num2 * 100);
	}
	return 0;
}