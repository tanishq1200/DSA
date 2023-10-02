//Leetcode - https://leetcode.com/problems/palindromic-substrings/
class Solution {
public:
    int ispalindrome(string s, int i , int j){
        int count = 0;
        while(i>=0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int total_count = 0;
        for(int i = 0; i < s.length(); i++){
            int j = i;
            int ans1 = ispalindrome(s,i,j);
            j = i+1;
            int ans2 = ispalindrome(s,i,j);
            total_count = total_count + ans1 + ans2;
        }
            
       return total_count; 
    }
};
