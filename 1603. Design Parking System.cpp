class ParkingSystem {
    int  x   ;
    int y  ; 
    int m  ; 
public:
    ParkingSystem(int big, int medium, int small) {
        x =  big ;
        y =  medium ;
        m  = small ;
    }
    
    bool addCar(int carType) {
      if (carType  == 1 )
      {
          if (x) 
          {
            x-- ;
            return true  ;
          }
          return false  ;
      }   
       if (carType  == 2 )
      {
          if (y) 
          {
            y-- ;
            return true  ;
          }
          return false  ;
      }   
       
          if (m) 
          {
            m-- ;
            return true  ;
          }
          return false  ;
      
    
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */