#include <stdio.h>
// 1 to 10 whithout - operator
void show(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    show(n + (~0));
}
void main()
{
    int a = 0;
    show(10);
}

/*
void show(int n)
{
    if (n == 11)
        return;
    show(n+1);
    printf("%d\n", n);
}
void main()
{
    show(1);
}
*/