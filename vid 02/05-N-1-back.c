#include <myfunc.h>
void func(int i, int n)
{
  if (i > n)
    return;
  func(i + 1, n);
  printf("%d ", i);
}
int main()
{
  int n;
  scanf("%d", &n);
  func(1, n);
  return 0;
}