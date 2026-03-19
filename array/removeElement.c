/*
Problem: Remove Element
Platform: LeetCode
Difficulty: Easy
Topic: Array, Two Pointers
Date Solved: 19-03-2026

Problem Description:
Given an integer array nums and an integer val, remove all occurrences 
of val in nums in-place. The relative order of the elements may be changed.
Return the number of elements in nums which are not equal to val.

Approach:
- Use two pointers:
  i → traverses the array
  j → keeps track of position to place non-val elements
- If nums[i] != val, copy it to nums[j] and increment j
- This shifts all valid elements to the front

Time Complexity: O(n)
Space Complexity: O(1)
*/



int removeElement(int* nums, int numsSize, int val) {
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            nums[j]=nums[i];
            j++;
        }
    }
    return j;

}