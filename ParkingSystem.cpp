class ParkingSystem {
public:
    int sm;
    int me;
    int bi;
    ParkingSystem(int big, int medium, int small) {
        sm=small;
        me=medium;
        bi=big;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(bi>=1){
                bi--;
                return true;
            }
            return false;
        }
        if(carType==2){
            if(me>=1){
                me--;
                return true;
            }
            return false;
        }
        if(carType==3){
            if(sm>=1){
                sm--;
                return true;
            }
            return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
