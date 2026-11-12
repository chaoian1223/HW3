#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b);

int main(void)
{
    int num1, num2;
    printf("請輸入兩個正整數: ");
    scanf("%d %d", &num1, &num2);

    printf("%d 和 %d 的最小公倍數為: %d\n", num1, num2, lcm(num1, num2));

    system("pause");
    return 0;
}

int lcm(int a, int b)
{
    int max = (a > b) ? a : b; 

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}