#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    printf("squares of the Numbers\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n", i*i);
    }
    return 0;
}