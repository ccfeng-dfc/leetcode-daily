class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        priority_queue<vector<int>> pq;
        pq.push({dp[0], 0});
        for(int i = 1; i < n; i++){
            while(pq.top()[1] < (i - k)){
                pq.pop();
            }
            dp[i] = nums[i] + pq.top()[0];
            pq.push({dp[i], i});
        }
        return dp.back();
    }
};
