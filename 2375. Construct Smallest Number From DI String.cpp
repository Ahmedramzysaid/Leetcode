class Solution {
 
private:
    string ans;
    vector<bool> fre;
    string s;

    void call(int i, string str, int last) {
        if (i > s.size()) {
            if (ans == "" || str < ans) {
                ans = str;
            }
            return;
        }

        if (s[i - 1] == 'I') {
            for (int k = 1; k <= 9; k++) {
                if (!fre[k] && k > last) {
                    fre[k] = true;
                    call(i + 1, str + to_string(k), k);
                    fre[k] = false;
                }
            }
        } else if (s[i - 1] == 'D') {
            for (int k = 1; k <= 9; k++) {
                if (!fre[k] && k < last) {
                    fre[k] = true;
                    call(i + 1, str + to_string(k), k);
                    fre[k] = false;
                }
            }
        }
    }

public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        ans = ""; 
        fre.assign(10, false); 
        s = pattern;

        for (int i = 1; i <= 9; ++i) {
            fre[i] = true;
            call(1, to_string(i), i);
            fre[i] = false;
        }

        return ans;
    
    }
};