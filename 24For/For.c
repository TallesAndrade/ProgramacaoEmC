#include <stdio.h>

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    printf("-------------------------");

    for (int i = 0; i <= 47; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d é par\n", i);
        }
        else
        {
            printf("%d é impar\n", i);
        }
    }

    return 0;
}