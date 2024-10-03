#include <stdio.h>
// 10 to 1 whithout - operator
void show(int n)
{
    if (n == 11)
        return;
    show(n+1);
    printf("%d\n", n);
}
void main()
{
    int a = 0;
    show(1);
}

/*
void show(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    show(n + (~0));
}
void main()
{
    show(10);
}
*/