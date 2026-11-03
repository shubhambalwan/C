#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[100], n, key, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Element found using Linear Search at position %d\n", result + 1);
    else
        printf("Element not found using Linear Search\n");

    // Binary Search
    result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found using Binary Search at position %d\n", result + 1);
    else
        printf("Element not found using Binary Search\n");

    return 0;
}