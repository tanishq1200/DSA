//Leetcode - https://leetcode.com/problems/largest-number/?source=submission-ac
class Solution {
public:
    static bool mycomp(string a, string b){
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>sums;
        for(auto n: nums){
            sums.push_back(to_string(n));
        }

        sort(sums.begin(),sums.end(), mycomp);
        if(sums[0] == "0") return "0";
        string ans = "";
        for(auto ch: sums){
            ans += ch;
        }
        return ans;
    }
};
