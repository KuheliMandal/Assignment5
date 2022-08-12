
#include <stdio.h>

int main()
{
  int n,i;
	printf("Enter a Number\n");
  scanf("%d", &n);
printf("Odd Number\n");
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", 2 * i - 1);
	}
  return 0;
}