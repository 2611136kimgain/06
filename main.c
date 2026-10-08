#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int result;

    result = sumTwo(10, 20);
    printf("sum = %d\n", result);

    result = square(5);
    printf("square = %d\n", result);

    result = get_max(10, 20);
    printf("max = %d\n", result);

    return 0;
}