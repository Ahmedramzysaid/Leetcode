class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
     int ans = numBottles ,  sum  =   numBottles  ; 
     
     while(numExchange <=  sum )
     {
        ans  +=  (sum/numExchange)  ; 
        sum  =  (sum%numExchange) + sum/numExchange ; 
     }   
     return ans  ; 
    }
};