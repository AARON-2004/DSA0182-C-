#include <iostream>
using namespace std;
int searchInsert(int nums[], int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid; 
        } else if (nums[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return low; 
}
int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result = searchInsert(nums, numsSize, target);
    cout << "Index or insertion point: " << result << endl;
    return 0;
}
