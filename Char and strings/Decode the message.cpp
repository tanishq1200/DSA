//Leetcode - https://leetcode.com/problems/decode-the-message/
class Solution {
public:
    string decodeMessage(string key, string message) {
        char mapping[300] = {0};
        char start = 'a';

        for(auto ch: key){
            if(ch != ' ' && mapping[ch] == 0 ){
                mapping[ch] = start;
                start++;
            }
        }
        string ans;
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else {
                char decodedchar = mapping[ch];
                ans.push_back(decodedchar);
            }
        }
        return ans;
    }
};
