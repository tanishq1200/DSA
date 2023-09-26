class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int starting_row = 0;
        int ending_col = n-1;
        int ending_row = m-1;
        int starting_col = 0;
        int count = 0;
        int total_count = m*n;
        while(count < total_count){
            for(int i = starting_col; i <= ending_col && count < total_count ; i++){
                ans.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;
            
            for(int i = starting_row ; i <= ending_row && count < total_count ; i++ ){
                ans.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;

            for(int i = ending_col ; i >= starting_col && count < total_count ; i-- ){
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            for(int i = ending_row ; i >= starting_row && count < total_count ; i--){
                ans.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col ++;
        }
        return ans;
    }
};
