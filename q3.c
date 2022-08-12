#include <stdio.h>

int main()
{
    int n;

    
    printf("Enter a value:\n ");
    scanf("%d", &n);

    for(n; n>=1; n--)
    {
        printf("%d\n", n);
    }

    return 0;
}