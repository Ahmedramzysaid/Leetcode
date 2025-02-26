class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>pos ;
        for(int i = 0 ;i  < boxes.size() ;i++) 
        {
             if(boxes[i] == '1')pos.push_back(i) ;
        }
        vector<int>ans  ;
        for(int i = 0 ;  i  < boxes.size(); i++)
        {
            int sum = 0;
          for(int j  = 0 ; j <pos.size() ;j++ )
             sum+=  abs(i-pos[j]) ;
             ans.push_back(sum) ;
        }
        return ans ;
        
    }
};