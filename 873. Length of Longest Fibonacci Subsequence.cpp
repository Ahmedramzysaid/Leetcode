class Solution {

public:
    int lenLongestFibSubseq(std::vector<int>& arr) {
        int n = arr.size();
        

    unordered_set<int> s(arr.begin(), arr.end());
        int ans = 0;

        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                int a = arr[i];
                int b = arr[j];
                int len = 2;
                int next = a + b;

                while (s.count(next)) {
                    len++;
                    a = b;
                    b = next;
                    next = a + b;
                }
                ans = std::max(ans, len);
            }
        }

        return ans >= 3 ? ans : 0;
 

    }
};