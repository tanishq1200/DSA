//GFG:- https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int, int>hash;
        
        for(int i = 0; i < n; i++){
            hash[arr[i]] ++;
        }
        for(int i = 0 ; i < n; i++){
            if(hash[arr[i]] >1){
                return i+1;
            }
        }
        return -1;
    }
};
