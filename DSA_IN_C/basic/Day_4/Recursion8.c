#include <stdio.h>
void show(int n)
{
    if (n < 1)
        return;
    show(n - 2);
    printf("%d ", n);
    show(n - 3);
}
void main()
{
    show(12);
}