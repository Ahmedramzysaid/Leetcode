class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
         int MOD = 1000000007 ;
        long long even = 1; 
        long long odd = 0;
        long long result = 0;
        long long prefixSum = 0;
        for (int num : arr) {
            prefixSum += num;
            if (prefixSum % 2 == 1) {
                result = (result  % MOD + even  % MOD ) % MOD;
                odd++;
            } else {
               
                result = (result  % MOD + odd  % MOD) % MOD;
               
                even++;
            }
        }
        
        return result;
    }
};