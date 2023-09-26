//leetcode:- https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //basic approach
        // int i = 0;
        // while(i < nums.size()){
        //     int sum1 = 0;
        //     int sum2 = 0;
        //     for(int j = 0; j < i ; j++){
        //         sum1 += nums[j];
        //     }
        //     for(int k = i+1; k < nums.size();k++){
        //         sum2 += nums[k];
        //     }
        //     if(sum1 == sum2) {
        //         return i;
        //     }
        //     i++;
        // }
        // return -1;
      
        //Optimized approach-
        vector<int>lsum(nums.size(),0);
        vector<int>rsum(nums.size(),0);
        for(int i = 1; i < nums.size(); i++){
            lsum[i] = lsum[i-1] + nums[i-1]; 
        }
        for(int i = nums.size()-2; i >= 0; i--){
            rsum[i] = rsum[i+1] + nums[i+1]; 
        }
        for(int i =0 ; i < nums.size(); i++){
            if(lsum[i] == rsum[i]) return i;
        }
        return -1;
    }
};
