#include <stdio.h>
// 1 to 10
void show(int n)
{
    if (n == 11)
        return;
    printf("%d\n", n);
    show(n + 1);
}
void main()
{
    show(1);
}

/*
void show(int n)
{
    if (n == 0)
        return;
    printf("%d\n",11- n);
    show(n - 1);
}
void main()
{
    show(10);
}
*/