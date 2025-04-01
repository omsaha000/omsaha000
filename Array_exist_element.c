//WAP to insert an element in an existing array

#include <stdio.h>

void insertElement(int arr[], int size, int element, int position) {
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
}

int main() {
    int arr[100], size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position! Please enter position between 0 and %d\n", size);
    } else {
        insertElement(arr, size, element, position);
        size++;

        printf("Array after insertion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}