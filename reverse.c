#include <stdio.h>
int main()
{
    int n, p, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        p = n % 10;
        sum = sum + p;
        n = n / 10;
    }
    printf("Sum=%d", sum);
    return 0;
}