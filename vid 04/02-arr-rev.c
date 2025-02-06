#include <myfunc.h>
void array_input(int arr[], int n);
void swap(int arr[], int i, int j);
void func(int arr[], int i, int n);
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  array_input(arr, n);
  func(arr, 0, n);
  print_Array(arr, n);
  return 0;
}
void func(int arr[], int i, int n)
{
  if (i >= n / 2)
    return;
  swap(arr, i, n - i - 1);
  func(arr, i + 1, n);
}
void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
void array_input(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}