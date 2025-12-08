class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) return n;

        sort(nums.begin(), nums.end());

        int cutoff = nums[n - k];
        int count = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] < cutoff) count++;
        }
        return count;
    }
};
©leetcode