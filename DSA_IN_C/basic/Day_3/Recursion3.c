#include <stdio.h>
int c = 0;
void show(int n)
{
    c++;
    if (n <= 0)
        return;
    printf("%d\n", n);
    show(n - 1);
    show(n - 1);
}
void main()
{
    show(5);
    printf("%d", c);
}