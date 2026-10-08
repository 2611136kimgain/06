#include <stdio.h>

int get_integer(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    return n;
}

int factorial(int n)
{
    int res = 1;
    int i;

    for (i = 1; i <= n; i++)
        res = res * i;

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main(void)
{
    int n, r;
    int result;

    n = get_integer();
    r = get_integer();

    result = combination(n, r);

    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}
