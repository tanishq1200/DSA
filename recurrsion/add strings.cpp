class Solution {
public:
    void addsum(string&num1, int p1, string&num2, int p2, string&ans, int carry){
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                ans.push_back(carry + '0');
            }
            return;
        
        }
        int sum1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int sum2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int total = sum1 + sum2 + carry;
        int digit = total % 10;
        carry = total / 10;
        ans.push_back(digit + '0');
        addsum(num1,p1-1,num2,p2-1,ans,carry);
    }
    string addStrings(string num1, string num2) {
        string ans ="";
        int p1 = num1.size()-1;
        int p2 = num2.size()-1;
        int carry = 0;
        addsum(num1,p1,num2,p2,ans,carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
