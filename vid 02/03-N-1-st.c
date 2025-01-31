#include <myfunc.h>
void func(int i, int n)
{
  if (i < 1)
    return;
  printf("%d\n", i);
  func(i - 1, n);
}
int main()
{
  // int n;
  // scanf("%d", &n);
  // func(n, n);
  FILE *ptr = fopen("output.txt", "w");
  return 0;
}