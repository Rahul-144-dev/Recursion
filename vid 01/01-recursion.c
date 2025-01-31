#include <myfunc.h>
int count;
void func()
{
  if (count > 50)
    return;
  printf("%d\n", count);
  count++;
  func();
}
void main()
{
  scanf("%d", &count);
  func();
  // FILE *ptr = fopen("output.txt", "w");
}