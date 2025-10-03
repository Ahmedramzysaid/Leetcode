class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int  ans  =  numBottles ,  ope = 0  ; 
        bool  flag  =  true ; 
        while(numExchange <=  numBottles  )
        {
             ope++ ;
             numBottles -=  numExchange ; 
             numExchange++ ;
             if(numExchange  > numBottles )
             {
                ans += ope  ;
                 numBottles+= ope  ; 
                 ope = 0 ; 
             }
        }
        return ans  ;
     
    }
};