//Leetcode - https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, num =0;
        
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '+' && s[i+1] == '-' || s[i] == '-' && s[i+1] == '+' ||s[i] == '+' && s[i+1] == '+' || s[i] == '-' && s[i+1] == '-'){
            return 0;
        }
        while(i < s.size() && (s[i] == '-' || s[i] == '+')){
            sign = s[i] == '+'? 1 : -1;
            i++;
        }
        while(i < s.size() && isdigit(s[i])){
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i] > '7')){
                return sign == -1? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[i] - '0');
            i++;
        }
        return num*sign;
    }
};
