#include <stdio.h>


int binarySearch(int arr[], int arrLength, int target) {
    int start = 0;
    int end = arrLength - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == target) {
            return mid;

        } else if (arr[mid] > target){
            end = mid - 1;

        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {

    int my_arr[] = {1, 3, 4, 5, 10, 12, 15};
    int myArrLength = sizeof(my_arr) / sizeof(my_arr[0]);
    int targetValue = 10;

    int arr2[] = {1, 3, 4, 5, 10, 12, 15};
    int target2 = 2;

    printf("%d", binarySearch(my_arr, myArrLength, targetValue));

    return 0;
}