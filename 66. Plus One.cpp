class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.back() == 9)
        {
            bool  flag  = false   ;
            for (int i = digits.size()-1; i>=0 ;i-- )
            {
                if (digits[i] == 9)
                {
                    flag =  true  ;
                    digits[i] = 0 ;
                }
                else {
                    flag = false  ;
                    digits[i]++ ;
                    break ;
                }
            }
            if (flag)
            {
              digits.insert(digits.begin(), 1);
            }
 
        }
        else {
               digits.back() = digits.back()+1 ;
        }
        return digits ;
    }
};