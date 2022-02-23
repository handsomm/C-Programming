#include <stdio.h>
#include<math.h>
int main()
{
    float x;
    float sum=0;
    printf("Enter a number: ");
    scanf("%f",&x);
    float exp = (x-1)/x;
    for(int i=7;i>=2;i--)
    {
        sum = sum + (pow(exp,i)*(0.5));
    }
    sum = sum+exp;
    printf("Answer is: %f", sum);


    return 0;
}
