#include <myfunc.h>
void func(int i, int n)
{
  if (i > n)
    return;
  printf("%d\n", n);
  func(i, n - 1);
}
int main()
{
  int n;
  scanf("%d", &n);
  func(1, n);
  return 0;
}