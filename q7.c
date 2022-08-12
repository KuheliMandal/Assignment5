#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d", &n);
    printf("Even Numbers");
    for(n;n>=1;n--)
    {
        printf("%d\n", 2*n);
    }
    return 0;
}