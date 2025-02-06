class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int , int> m ;
        for (auto  it :  nums)m[it]++ ;
        nums.clear() ;
        for (auto it : m)
        {
        for (int i = 0 ; i  < 2  && i < it.second ;i++)
         nums.push_back(it.first) ;
        }
        return nums.size() ;
    }
};