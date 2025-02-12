class Solution {
public:
    int romanToInt(string s) {
        int sum  = 0 ; 
        vector<bool>v(s.size()+1 , false) ;
   for(int i = 0  ; i  <  s.size()  ;i++)
   {
    if(v[i]) continue ;
    if (s[i] == 'I')
    {
        v[i] =  true  ;
        if(s[i+1] == 'V') {
            sum+=4 ;
             v[i+1] =  true  ;
            }
        else if (s[i+1] == 'X')
        {
            sum += 9 ;
             v[i+1] =  true  ;
        
        }else {
            sum++ ;
        }

    }
    else if (s[i] == 'X')
    {
       v[i] =  true  ;
        if(s[i+1] == 'L') {
            sum+=40 ;
             v[i+1] =  true  ;
            }
        else if (s[i+1] == 'C')
        {
            sum += 90 ;
             v[i+1] =  true  ;
        
        }else {
            sum+=10 ;
        }
    }
    else if (s[i] == 'C')
    {
       v[i] =  true  ;
        if(s[i+1] == 'D') {
            sum+=400 ;
             v[i+1] =  true  ;
            }
        else if (s[i+1] == 'M')
        {
            sum += 900 ;
             v[i+1] =  true  ;
        
        }else {
            sum+=100 ;
        }
    }
    else if (s[i] == 'V')
    {
        v[i] =  true  ;
         sum+=5 ;
    }
    else if (s[i] == 'L')
    {
        v[i] =  true  ;
         sum+=50 ;
    }
    else if (s[i] == 'D')
    {
        v[i] =  true  ;
         sum+=500 ;
    }
    else if (s[i] == 'M')
    {
        v[i] =  true  ;
         sum+=1000 ;
    }
   }
    return sum ;
    }
};