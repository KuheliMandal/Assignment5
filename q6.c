
#include <stdio.h>
int main(){
    int i = 1,n;
    printf(" Enter a Number:\n");
    scanf("%d", &n);
    printf("Even Numbers\n");
    while (i <= n){
        printf("%d \n", 2 * i);
        i++;
    }
    return 0;
}