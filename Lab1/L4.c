#include <stdio.h>
void reverse_array(int array[], int n) {
  int i, temp;
  for (i = 0; i < n / 2; i++) {
    temp = array[i];
    array[i] = array[n - i - 1];
    array[n - i - 1] = temp;
  }
}
int main() {
  int n;
  int array[100];
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  }
  printf("The original array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  reverse_array(array, n);
  printf("\nThe reversed array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}