#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int n = prices.size();
        if (n == 0) {
            return 0; // Empty array, no profit can be made
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < n; ++i) {
            // Update the minimum price
            minPrice = std::min(minPrice, prices[i]);

            // Update the maximum profit if a better opportunity is found
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};
