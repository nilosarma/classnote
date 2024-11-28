#include <stdio.h>

int sum(int n)
{
    if (n == 1 || n == 2 || n == 3)
        return n - 1;
    return 2 * sum(n - 1) - sum(n - 3);
}

int main()
{
    int N;
    N = sum(4);
    printf("sum=%d", N);
    return 0;
}
