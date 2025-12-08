// brute force 
class Solution {
public:

    int reverse(int digit){
        int rem ,mul = 1;
        int ans  = 0;
        while(digit){
            rem = digit%10;
            ans  = ans*10 + rem;
            mul*= 10;
            digit /=10;
        }

        return ans;
    }
    int minMirrorPairDistance(vector<int>& nums) {

        int ans  = nums.size()+1;
        for(int i=0;i<nums.size();i++){
            int temp = reverse(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                if(temp==nums[j]){
                    ans = min(ans,j-i);
                    break;
                }
            }
        }

        return  (ans==nums.size()+1 ? -1:ans);
    }
};©leetcode