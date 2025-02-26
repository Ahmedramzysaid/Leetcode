class Solution {
public:
    int titleToNumber(string columnTitle) {
        int NumCell = 0;
        for (int i = 0  ; i < columnTitle.size() ;i++ )
         NumCell = NumCell * 26 + (columnTitle[i] - 'A' + 1);
         return NumCell ;
    }
};