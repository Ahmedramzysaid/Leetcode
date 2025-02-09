class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        vector<double> v(2) ;
        v[0] = celsius + 273.15 ;
        v[1] = (celsius * 1.8) + 32 ;
        return v  ;
    }
};