/* Print this partten
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= (2 * i) - 1; j++)
        {
            if (j < 10)
            {
                printf("0%d ",j);
            }
            else
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
    return 0;
}