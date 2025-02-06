#include <myfunc.h>
int func(int i, int n, char name[]);
int main()
{
  int n;
  scanf("%d", &n);
  char name[n];
  getchar();
  gets(name);
  if (func(0, n, name))
    printf("Palindrome");
  else
    printf("Not-Palindrome");
  return 0;
}
int func(int i, int n, char name[])
{
  if (i >= n / 2)
    return 1;
  if (name[i] != name[n - i - 1])
    return 0;
  return func(i + 1, n, name);
}