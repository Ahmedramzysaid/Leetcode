class Solution {
public:
    string defangIPaddr(string address) {
     string res = "" ;
     for(auto  it :  address)   
     {
        if (it =='.')
        {
            res += '[';
            res += '.';
            res += ']';
        }
        else {
            res+=it  ;
        }
     }
     return res  ;
    }
};