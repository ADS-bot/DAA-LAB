#include <stdio.h>
int main() {
  int n;
  int array[100];
  int sum = 0;
  int i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  }
  for (i = 0; i < n; i++) {
    sum += array[i];
  }
  printf("The sum of the elements in the array is: %d\n", sum);
  return 0;
}