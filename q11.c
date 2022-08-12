#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a Number:\n");
    scanf("%d", &n);
      printf("Enter a Number:\n");
    scanf("%d", &i);
    printf("square of the Numbers\n");
    for(i;i<=n;i++)
    {
        printf("%d\n", i*n);
    }
    return 0;
}