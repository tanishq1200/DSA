// LC - https://leetcode.com/problems/maximal-square/
class Solution {
public:
    int solve(vector<vector<char>>& matrix, int &row, int & col, int i , int j, int &maxi){
        if(i >= row || j >= col){
            return 0;
        }
        int right  = solve(matrix, row, col, i,j+1,maxi);
        int down = solve(matrix, row, col, i+1, j,maxi);
        int diagonal  = solve(matrix, row, col, i+1, j+1,maxi);
        if(matrix[i][j] == '1'){
            int ans = 1 + min(right,min(down, diagonal));
            maxi = max(ans,maxi);
            return ans;
        }
        else{
            return 0;
        }

    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int i = 0;
        int j = 0;
        int row  = matrix.size();
        int col = matrix[0].size();
        int maxi = 0;
        int answer = solve(matrix, row, col, i ,j,maxi);
        return maxi * maxi;
    }
};
