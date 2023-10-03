//Leetcode - https://leetcode.com/problems/reverse-vowels-of-a-string/
class Solution {
public:
    bool checkVowel(char ch){
        int ans = 0;
        
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            ans = 1;
        }
        else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            ans = 1;
        }
        if(ans == 1){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<=j){
            if(checkVowel(s[i]) && checkVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!checkVowel(s[i])){
                i++;
            }
            else if(!checkVowel(s[j])){
                j--;
            }
            
        }
        return s;
    }
};
