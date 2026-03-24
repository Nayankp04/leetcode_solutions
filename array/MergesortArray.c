/*
Problem: Merge Sorted Array
Platform: LeetCode
Difficulty: Easy
Topic: Array, Two Pointers
Date Solved: 24-03-2026

Problem Description:
You are given two sorted integer arrays nums1 and nums2,
and two integers m and n representing the number of elements in nums1 and nums2 respectively.
Merge nums2 into nums1 as one sorted array.

Approach:
- Use two pointers to compare elements from both arrays
- Store the smaller element into a temporary result array
- Copy remaining elements from either array
- Finally copy merged result back into nums1

Time Complexity: O(m + n)
Space Complexity: O(m + n)
*/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,j=0,k=0;
    int result[200];
   while(i<m && j<n){
     if(nums1[i] < nums2[j])
        {
            result[k++] = nums1[i++];
        }
        else
        {
            result[k++] = nums2[j++];
        }
   }
   while(i<m){
    result[k++]=nums1[i++];
   }
    while(j<n){
    result[k++]=nums2[j++];
   }
   for(int l=0;l<k;l++)
      nums1[l]=result[l];
 }