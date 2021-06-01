#include <stdio.h>

int main()
{
    unsigned long f = 0;
    unsigned long b = 1;
    unsigned long sum = 1;
    int select;
    int i;

    printf("何個のフィボナッチ数列？\n");
    scanf("%d", &select);

    putchar('\n');

    for (i = 0; i <= select; i++)
    {
        if (select == 0)
        {
            printf("値はありません。\n");
        }
        else
        {
            if (i == 1)
            {
                printf("0,");
            }
            else if (i > 1)
            {
                printf("%lu,", sum);
                sum = f + b;
                f = sum - f;
                b = sum;
            }
        }
    }
    putchar('\n');
}