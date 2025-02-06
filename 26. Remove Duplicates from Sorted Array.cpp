class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> res ;
        for (auto  it  : nums )res.insert(it) ;
        nums.clear() ;
        for (auto it : res)  nums.push_back(it) ;
        return res.size() ;
    }
};