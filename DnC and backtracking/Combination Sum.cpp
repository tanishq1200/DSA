// LC - https://leetcode.com/problems/combination-sum/
class Solution {
public:
    void comb(vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&v, int index){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = index; i < candidates.size(); i++){
            v.push_back(candidates[i]);
            comb(candidates, target-candidates[i], ans,v , i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        comb(candidates, target, ans, v, 0);
        return ans;
    }
};
