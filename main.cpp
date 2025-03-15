#include <iostream>
#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> dp(n+1, -1);

        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

int main() {
    Solution sol;
    int n1 = 2;
    std::cout << "Input: n = " << n1 << "\nOutput: " << sol.climbStairs(n1) << "\n";

    int n2 = 3;
    std::cout << "Input: n = " << n2 << "\nOutput: " << sol.climbStairs(n2) << "\n";

    return 0;
}
