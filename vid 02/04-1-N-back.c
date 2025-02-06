#include <myfunc.h>
void func(int i, int n)
{
  if (i < 1)
    return;
  func(i - 1, n);
  printf("%d\n", i);
}
int main()
{
  int n;
  scanf("%d", &n);
  func(n, n);
  return 0;
}