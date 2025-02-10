class Solution {
public:
    int s;
    bool arr[9][9];
    vector<vector<string>> result;
    
    bool check(int r, int c) {
       
        for (int i = r; i >= 0; i--)
            if (arr[i][c]) return false;
            
     
        for (int i = r, j = c; i >= 0 && j >= 0; i--, j--)
            if (arr[i][j]) return false;
            
       
        for (int i = r, j = c; i >= 0 && j < s; i--, j++)
            if (arr[i][j]) return false;
            
        return true;
    }
    
    void call(int r) {
        if (r == s) {
           
            vector<string> solution;
            for (int i = 0; i < s; i++) {
                string row = "";
                for (int j = 0; j < s; j++) {
                    row += (arr[i][j] ? 'Q' : '.');
                }
                solution.push_back(row);
            }
            result.push_back(solution);
            return;
        }
        
        for (int i = 0; i < s; i++) {
            if (check(r, i)) {
                arr[r][i] = true;
                call(r + 1);
                arr[r][i] = false;  
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        s = n;
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = false;
            }
        }
        
        call(0);
        return result;
    }
};