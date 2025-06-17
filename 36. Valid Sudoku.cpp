class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i  = 0 ; i  < 9 ; i++)
        {
            vector<int>fre(10,0) ;
          //  bool  flag  =  true  ;
            for(int j = 0;  j <  9  ;j++)
            {
             if(board[i][j] != '.')
             {
              //  flag =  false  ;
                fre[board[i][j]-'0']++;
                if (fre[board[i][j]-'0'] > 1) 
                  return false  ;
             }
            }
         //  if(flag) return false  ;
        }
        for(int i  = 0 ; i  < 9 ; i++)
        {
            vector<int>fre(10,0) ;
       //    bool  flag  =  true  ;
            for(int j = 0;  j <  9  ;j++)
            {
             if(board[j][i] != '.')
             {
                //flag =  false  ;
                fre[board[j][i]-'0']++;
                if (fre[board[j][i]-'0'] > 1) 
                  return false  ;
             }
            }
            //if(flag) return false  ;
        }
        for (int blockRow = 0; blockRow < 9; blockRow += 3) {
            for (int blockCol = 0; blockCol < 9; blockCol += 3) {
                vector<int> box(9, 0);
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[blockRow + i][blockCol + j];
                        if (c != '.') {
                            int idx = c - '1';
                            box[idx]++;
                            if (box[idx] > 1) return false;
                        }
                    }
                }
            }
        }

        return true; 
    }
};
