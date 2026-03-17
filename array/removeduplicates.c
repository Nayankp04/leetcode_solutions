/*
Problem: Remove Duplicates from Sorted Array
Platform: LeetCode
Topic: Arrays, Two Pointers
date=17-3-2026
Difficulty: Easy
Description:
Given a sorted array, remove the duplicates in-place such that each element
appears only once and return the new length. Do not use extra space.

Approach:
- Use two pointers:
  i → traverses the array
  j → tracks the position of unique elements
- Compare nums[i] with nums[j]
- If different, increment j and update nums[j] = nums[i]
- This ensures all unique elements are stored at the beginning

Time Complexity: O(n)
- Traverse the array once

Space Complexity: O(1)
- In-place modification, no extra space used
*/

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;

    int j = 0;

    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}