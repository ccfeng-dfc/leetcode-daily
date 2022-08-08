// 2022-08-08, 2022-08-08
// https://leetcode.com/problems/longest-increasing-subsequence/submissions/

class Solution { 
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), ans;
        vector<int> dp(n, 1);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){ // >, <
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        ans = *max_element(dp.begin(), dp.end());
        return ans;
    }
};
