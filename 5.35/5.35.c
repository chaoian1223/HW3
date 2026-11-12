#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int n;
    printf("請輸入要計算的費氏數列項數 n (第0項為0): ");
    scanf("%u", &n);
    printf("第 %u 項費氏數 = %llu\n\n", n, fibonacci(n));

    unsigned int i = 0;
    unsigned long long int prev = 0, curr;
    while (1)
    {
        curr = fibonacci(i);
        if (i > 1 && curr < prev)
        {
            printf("系統能印出的最大費氏數為第 %u 項: %llu\n", i - 1, prev);
            break;
        }
        prev = curr;
        i++;
    }

    system("pause");
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0, b = 1, temp;
    for (unsigned int i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}