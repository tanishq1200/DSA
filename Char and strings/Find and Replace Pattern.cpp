//Leetcode - https://leetcode.com/problems/find-and-replace-pattern/
class Solution {
public:
    void mapPattern(string& curr){
        char mapping[300] = {0};
        char start = 'a'; 
        for(auto ch: curr){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }
        for(int i = 0; i < curr.length(); i++){
            char ch = curr[i];
            curr[i] = mapping[ch];
        }
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        mapPattern(pattern);
        for(string s:words){
            string temp = s;
            mapPattern(temp);
            if(temp == pattern){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
