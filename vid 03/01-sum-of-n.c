#include <myfunc.h>
void func(int i, int sum)
{
  if (i < 1)
  {
    printf("%d", sum);
    return;
  }
  func(i - 1, sum + i);
}
int main()
{
  int n;
  scanf("%d", &n);
  func(n, 0);
  return 0;
}