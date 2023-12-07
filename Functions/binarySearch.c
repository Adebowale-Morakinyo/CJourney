#include <stdio.h>

int binarySearch(int arr[], int target, int start, int end) {
    // Base case: array has one item
    if (start == end){
        return arr[start] == target;
    }

    // Recursive case: split the array in half
    int mid = (start + end) / 2;
    if (arr[mid] == target){
        return 1; // Target found in the middle
    } else if (arr[mid] < target) {
        // Discard the left half and search in the right half
        return binarySearch(arr, target, mid + 1, end);
    } else {
        // Discard the right half and search in the left half
        return binarySearch(arr, target, start, mid);
    }
}

// Example usage
int main() {

    int my_arr[] = {1, 3, 4, 5, 10, 12, 15};
    int arrLength = sizeof(my_arr) / sizeof(my_arr[0]);

    int targetValue = 7;

    if (binarySearch(my_arr, targetValue, 0, arrLength -1)) {
        printf(" Target %d found in the array\n", targetValue);
    } else {
        printf(" Target %d not found in the array\n", targetValue);
    }
    
    return 0;
}
