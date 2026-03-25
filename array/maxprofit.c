 /*
Problem: Best Time to Buy and Sell Stock
Platform: LeetCode
Difficulty: Easy
Topic: Array, Greedy
Date Solved: 25-03-2026

Problem Description:
You are given an array prices where prices[i] is the price of a given stock on the i-th day.
You want to maximize your profit by choosing a single day to buy one stock
and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve. If no profit is possible, return 0.

Approach:
- Track the minimum price seen so far
- For each day, calculate profit = current price - minimum price
- Update maximum profit if the current profit is greater
- Update minimum price when a lower price is found

Time Complexity: O(n)
Space Complexity: O(1)
*/
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0)
        return 0;

    int min = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i]; }
        int profit = prices[i] - min;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}