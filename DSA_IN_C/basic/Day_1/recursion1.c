#include <stdio.h>
int c = 1;
void show()
{
  for (int i = 0; i <= 4; i++)
  {
    printf("%d ", i);

    if (i == c)
    {
      c++;
      show();
      printf("ram ");
    }
  }
}
void main()
{
  show();
}

//--> 0 1 0 1 2 0 1 2 3 0 1 2 3 4 0 1 2 3 4 ram ram 4 ram 3 4 ram 2 3 4