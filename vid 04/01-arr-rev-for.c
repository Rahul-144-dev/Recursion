#include <myfunc.h>
void swap(int arr[], int n)
{
  int i = 0, j = n - 1;
  while (i <= j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = size_array(arr);
  swap(arr, n);
  print_Array(arr, n);

  return 0;
}