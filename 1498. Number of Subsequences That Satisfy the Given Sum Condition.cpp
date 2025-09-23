class Solution {
    public:
        const int MOD = 1e9 + 7;
    
        int powmod(int base, int exp) {
            long long result = 1;
            long long b = base;
            while (exp > 0) {
                if (exp % 2 == 1)
                    result = (result * b) % MOD;
                b = (b * b) % MOD;
                exp /= 2;
            }
            return result;
        }
    
        int numSubseq(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            int left = 0, right = n - 1;
            int count = 0;
    
            while (left <= right) {
                if (nums[left] + nums[right] <= target) {
                    count = (count + powmod(2, right - left)) % MOD;
                    left++;
                } else {
                    right--;
                }
            }
    
            return count;
        }
    };
    