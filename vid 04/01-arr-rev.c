#include <myfunc.h>
void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
void func(int i, int j, int arr[], int n)
{
  if (i >= j)
    return;
  swap(arr, i, j);
  func(i + 1, j - 1, arr, n);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  func(0, n - 1, arr, n);
  print_Array(arr, n);
  return 0;
}