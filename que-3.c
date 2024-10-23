
// 10 9 8 7 6
//    9 8 7 6
//      8 7 6
//        7 6
//          6


#include <stdio.h>
int main()
{
  int i, j, k;
  
  for (i = 0; i <= 10; i++)
  {
    for (k = 0; k < i; k++)
    {
      printf("  ");
    }
    for (j = 10 - i; j >= 6; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
