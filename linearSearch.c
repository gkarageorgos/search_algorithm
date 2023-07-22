#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaration of the function for linear search
int linearSearch(int arr[], int n, int target);

int main() {
    int n; // Size of the array
    int max_value; // Maximum possible element in the array
    int x;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the maximum possible element in the array:");
    scanf("%d", &max_value);

    printf("Enter the number you want to search for in the array:");
    scanf("%d", &x);

    // Set the seed for the rand() function based on the current time
    srand(time(0));

    // Create and generate random integers for the array
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = rand() % max_value; // Generate a random number in the range [0, max_value-1]
    }

    printf("Random integer array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int index = linearSearch(array, n, x);

    if (index != -1) {
        printf("The element %d is found at position %d.\n", x, index + 1);
    } else {
        printf("The element %d is not found in the array.\n", x);
    }


    return 0;

}

// Implementation of the function for linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the position of the element if found
        }
    }
    return -1; // Return -1 if the element is not found
}