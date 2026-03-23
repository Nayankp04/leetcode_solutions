 /*
Problem: Plus One
Platform: LeetCode
Difficulty: Easy
Topic: Array, Math
Date Solved: 20-03-2026

Problem Description:
You are given a large integer represented as an array of digits.
Increment the integer by one and return the resulting array of digits.

Approach:
- Traverse the array from the end
- If digit is less than 9, increment and return
- If digit is 9, set it to 0 and continue
- If all digits are 9, create a new array with leading 1 followed by zeros

Time Complexity: O(n)
Space Complexity: O(1) (O(n) in worst case when new array is created)
*/
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    for (int i = digitsSize - 1; i >= 0; i--) {  
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;}
        digits[i] = 0;}
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;}
    *returnSize = digitsSize + 1;
    return result;}