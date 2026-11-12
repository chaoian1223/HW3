#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int start, int end, int temp);

int main(void)
{
    int disks;
    printf("請輸入圓盤數量: ");
    scanf("%d", &disks);

    printf("移動步驟如下:\n");
    hanoi(disks, 1, 3, 2);

    system("pause");
    return 0;
}

void hanoi(int n, int start, int end, int temp)
{
    if (n == 1)
    {
        printf("%d -> %d\n", start, end);
        return;
    }

    hanoi(n - 1, start, temp, end);

    printf("%d -> %d\n", start, end);

    hanoi(n - 1, temp, end, start);
}