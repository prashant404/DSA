/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/

#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min_prices = INT_MAX;
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            min_prices = std::min(min_prices, prices[i]);
            max_profit = std::max(max_profit, prices[i] - min_prices);
        }
        return max_profit;
    }
};

int main() {
    // Example input
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    // Create an instance of Solution
    Solution sol;
    
    // Calculate the maximum profit
    int result = sol.maxProfit(prices);
    
    // Output the result
    std::cout << "The maximum profit is: " << result << std::endl;
    
    return 0;
}
