 /*
Problem: Longest Common Prefix
Platform: LeetCode
Topic: Strings
date=16-03-2026
Difficulty: Easy
Description:
Given an array of strings, find the longest common prefix shared among all strings.
If there is no common prefix, return an empty string "".

Approach:
- Use the first string as a reference.
- Compare each character of the first string with the same position
  in all other strings.
- If a mismatch or end of a string is found, terminate the prefix
  by inserting '\0' and return the result.

Time Complexity: O(n * m)
n = number of strings
m = length of the shortest string

Space Complexity: O(1)
(No extra space used, modification done in-place)
*/

char* longestCommonPrefix(char** strs, int strsSize) {
     if (strsSize == 0)
        return "";

    for (int i = 0; strs[0][i] != '\0'; i++) {
        
        for (int j = 1; j < strsSize; j++) {
            
            if (strs[j][i] != strs[0][i] || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    
    return strs[0];
}