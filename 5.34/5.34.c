#include <stdio.h>
#include <stdlib.h>

long long power(int base, int exponent);

int main(void)
{
    int base, exponent;
    printf("請輸入底數與指數 (指數 >= 1): ");
    scanf("%d %d", &base, &exponent);

    printf("%d 的 %d 次方 = %lld\n", base, exponent, power(base, exponent));

    system("pause");
    return 0;
}

long long power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}