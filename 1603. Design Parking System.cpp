class ParkingSystem {
public:
    int bigLeft, smallLeft, mediumLeft;
    ParkingSystem(int big, int medium, int small) {
        this->bigLeft = big;
        this->mediumLeft = medium;
        this->smallLeft = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && bigLeft > 0)
        {
            bigLeft--;
            return true;
        }
        
        if(carType == 2 && mediumLeft > 0)
        {
            mediumLeft--;
            return true;
        }
        
        if(carType == 3 && smallLeft > 0)
        {
            smallLeft--;
            return true;
        }
        return false;
    }
        
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
