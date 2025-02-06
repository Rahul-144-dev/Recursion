#include <myfunc.h>
int func(int n)
{
  if (n <= 1)
    return n;
  return func(n - 1) + func(n - 2);
}
int main()
{
  printf("%d", func(7));
  return 0;
}