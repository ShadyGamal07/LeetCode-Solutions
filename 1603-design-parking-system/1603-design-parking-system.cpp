class ParkingSystem {
        vector<int> ans;
public:
   
    ParkingSystem(int big, int medium, int small) {
        
      ans={big,medium,small};  
        
    }
    
    bool addCar(int carType) {
        
        if(ans[carType-1]!=0){
            ans[carType-1]--;
            
            return true;
            
        }
        
        return false;
        
    }
};