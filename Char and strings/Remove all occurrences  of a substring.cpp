//Leetcode - https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
class Solution {
public:
    string removeOccurrences(string s, string part) {
        

        while(s.find(part) != string::npos) {
            //if inside loop, it means that part exists in s string
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
