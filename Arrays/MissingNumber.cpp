class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0, j = nums.size(); i < nums.size();i++,j--){
            ans = ans^nums[i]^j;
        }
        return ans;
    }
};
