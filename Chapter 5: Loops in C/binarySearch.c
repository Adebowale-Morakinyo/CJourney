#include <stdio.h>


int binarySearch(int arr[], int target, int start, int end) {
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target) {
            return mid;

        } else if (arr[mid] > target){
            end = mid;

        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {

    int my_arr[] = {1, 3, 4, 5, 10, 12, 15};
    int arrLength = sizeof(my_arr) / sizeof(my_arr[0]);
    int target_value = 10;

    int arr2[] = {1, 3, 4, 5, 10, 12, 15};
    int target2 = 2;

    printf("%d\n", binarySearch(my_arr, target_value, 0, arrLength -1));

    return 0;
}
