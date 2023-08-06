#include <stdio.h>
void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    printf("Common elements between the two arrays are: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    printf("\n");
}

int main() {
    int size1, size2;

    // Input size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    // Input elements of the first array
    int arr1[size1];
    printf("Enter %d elements of the first array: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    // Input elements of the second array
    int arr2[size2];
    printf("Enter %d elements of the second array: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find and display common elements
    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}
 