//LC :- https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =1;
        int j = 0;
        while(i <nums.size()){
            if(nums[j] == nums[i]){
                i++;
            }
            else{
                j++;
                nums[j] = nums[i];
                i++;
            }
        }
        return j+1;
        
    }
        
};
