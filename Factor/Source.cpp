#include<stdio.h>
int main()
{
	int num;
	int i;
	printf("Enter a interger : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0) {
			printf("%d\n", i);
		}

	}

	return 0;
}