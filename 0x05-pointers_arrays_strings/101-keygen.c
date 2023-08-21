#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main entry
 * program 101-crackme
 * Return: 0
 */


int main(void)
{
    int i;
    char password[100];
    int sum = 0;

    srand(time(NULL));
    for (i = 0; sum < 2772; i++)
    {
        password[i] = rand() % 94 + 33;
        sum += password[i];
    }
    password[i] = '\0';
    i--;
    if (sum != 2772)
    {
        if (sum - 2772 < 0)
            password[i] += 2772 - sum;
        else
            password[i] -= sum - 2772;
    }
    printf("%s\n", password);
    return (0);
}
