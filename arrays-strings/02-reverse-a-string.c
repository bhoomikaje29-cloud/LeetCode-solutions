#include <stdio.h>

int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    int n = 5;
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }

    printf("[");

    for (int i = 0; i < n; i++)
    {
        printf("\"%c\"", s[i]);

        if (i < n - 1)
        {
            printf(",");
        }
    }

    printf("]\n");

    return 0;
}