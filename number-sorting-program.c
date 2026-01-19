// this program sorts an array of numbers using the bubble sort algorithm

#include <stdio.h>
#include <stdlib.h>

// Function to read array elements from user
static int read_array(int *arr, int size, const char *label) {
    printf("Enter %d elements for %s:\n", size, label);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input. Expected an integer.\n");
            return 0;
        }
    }
    return 1;
}

// Bubble sort function
static void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
static void print_array(const int *arr, int size, const char *label) {
    printf("%s: ", label);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    
    // Declare variables
    int n;
    int k;

    // Get the number of elements from the user
    printf("Enter the number of elements for array 1: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input. Expected an integer.\n");
        return 1;
    }

    // Get the number of elements for the second array
    printf("Enter the number of elements for array 2: ");
    if (scanf("%d", &k) != 1) {
        fprintf(stderr, "Invalid input. Expected an integer.\n"); // print error message
        return 1;
    }

    if (n <= 0 || k <= 0) {
        printf("Number of elements must be positive.\n"); 
        return 1; // return with error code
    }

    // Dynamically allocate memory for the arrays
    int *arr1 = malloc(n * sizeof(int));
    int *arr2 = malloc(k * sizeof(int));

    // Check for successful memory allocation
    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed.\n");
        free(arr1);
        free(arr2);
        printf("Paired sorted elements:\n");
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < k; ++j) {
            printf("array1 element %d (%d) with array2 element %d (%d)\n",
                   i + 1, arr1[i], j + 1, arr2[j]);
            }
        }
        return 1;
    }

    // Read array elements from user
    if (!read_array(arr1, n, "array 1") || !read_array(arr2, k, "array 2")) {
        fprintf(stderr, "Failed to read array elements.\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    // Sort the arrays
    bubble_sort(arr1, n);
    bubble_sort(arr2, k);

    // Print the sorted arrays
    print_array(arr1, n, "Sorted array 1");
    print_array(arr2, k, "Sorted array 2");

    // Free allocated memory
    free(arr1);
    free(arr2);

    return 0;
}