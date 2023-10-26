// LC - https://leetcode.com/problems/combination-sum-ii/
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
            if(i > index && candidates[i] == candidates[i-1]){
                continue;
            }
            v.push_back(candidates[i]);
            comb(candidates, target-candidates[i], ans,v , i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        comb(candidates, target, ans, v, 0);
        return ans;
    }
};
