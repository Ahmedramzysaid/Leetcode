class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
       map<long  long , int > m ; 
       for(int  i= 0  ;i < nums.size() ;i++) 
       {
        for (int j = i+1  ;j < nums.size() ; j++)
        {
              m[nums[i]*nums[j]]++ ;
        }
       }
        int cnt = 0 ; 
        for(auto  it : m)
        {
            if(it.second > 1)
            {
                cnt += 8*(it.second * (it.second - 1) / 2);
            }
        }
        return cnt ;
    }
};