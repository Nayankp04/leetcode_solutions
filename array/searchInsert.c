/*
Problem: Search Insert Position
Platform: LeetCode
Difficulty: Easy
Topic: Binary Search
Date Solved: 20-03-2026

Problem Description:
Given a sorted array of distinct integers and a target value,
return the index if the target is found.
If not, return the index where it would be inserted in order.

Approach:
- Use Binary Search to efficiently find the position
- Initialize two pointers: left and right
- Find mid index and compare with target
- Adjust search space accordingly
- If not found, 'left' gives the correct insertion index

Time Complexity: O(log n)
Space Complexity: O(1)
*/

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    // If not found, 'left' is the correct insertion index
    return left;
}