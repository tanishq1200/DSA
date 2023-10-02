//Leetcode - https://leetcode.com/problems/valid-palindrome-ii/
class Solution {
public:
    bool istrue(string s, int i, int j){
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                bool ans1 = istrue(s,i,j-1);
                bool ans2 =  istrue(s,i+1,j);
                return ans1 || ans2;
                }
            }
            return true;
        }
    
};
