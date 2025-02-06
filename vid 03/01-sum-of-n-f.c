#include <myfunc.h>
int func(int n)
{
  if (n == 0)
    return 0;
  return n + func(n - 1);
}
int main()
{
  int n;
  scanf("%d", &n);
  printf("%d", func(n));
  return 0;
}