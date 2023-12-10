#include <stdio.h>


int binarySearch(int arr[], int arrLength, int target) {
    int start = 0;
    int end = arrLength - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == target) {
            return mid;

        } else if (arr[mid] > target) {
            end = mid--;

        } else {
            start = mid++;
        }
    }

    return -1;
}

int main() {

    int my_arr[] = {1, 3, 4, 5, 10, 12, 15};
    int myArrLength = sizeof(my_arr) / sizeof(my_arr[0]);
    int targetValue = 10;

    printf("Target Value, %d was found at index %d\n", targetValue, binarySearch(my_arr, myArrLength, targetValue));

    return 0;
}