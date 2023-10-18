class Solution {
public:
    void rem(string &s, string part){
        if(s.find(part) == string::npos) return;

        else if(s.find(part) != string::npos){
            s.erase(s.find(part), part.length());
            rem(s,part);
        }
        
    }
    string removeOccurrences(string s, string part) {
        
        
        rem(s,part);
        return s;
    }
};

