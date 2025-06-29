#include <stdio.h>
int i;
int isPrime(int n)
{
    int f = 0;
    for (i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{

    int n, i;
    puts("Enter number untill print prime number : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}