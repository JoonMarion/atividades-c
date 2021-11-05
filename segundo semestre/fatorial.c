#include<stdio.h>

int main()
{
  int fat, n = 1;

  for(fat = 1; n <= 10; n = n + 1)
  {
      fat = fat * n;
      printf("\n%d", fat);
  }
  return 0;
}
