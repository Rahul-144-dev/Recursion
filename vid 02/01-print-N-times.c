#include <myfunc.h>
void func(int i, int n)
{
  if (i > n)
    return;
  printf("Rahul\n");
  func(i + 1, n);
}
int main()
{
  int i, n;
  scanf("%d", &n);
  func(1, n);
  return 0;
}