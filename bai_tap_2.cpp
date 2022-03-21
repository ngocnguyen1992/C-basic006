#include <stdio.h>
int main()
{
	int n;
	printf("nhap vao gia tri n cua ban : ");
	scanf_s("%d", &n);
	float sum = 0;
	if (n < 0)
	{
		printf("ban vui long nhap so lon hon 0");
	}
	else {
		for (float i = 1; i <= n; i++)
		{
			sum = sum + (2 * i + 1) / (2 * i + 2);
		}
		printf("%f", sum);
	}



	return 0;
}
