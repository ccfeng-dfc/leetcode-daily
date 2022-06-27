// 2022-06-27, 2022-06-27
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/

class Solution {
public:
    int minPartitions(string n) {
        int maxi = 0;
        for(int i = 0; i < n.size(); i++){
            maxi = max(maxi, (int)n[i] - '0');
        }
        return maxi;
    }
};