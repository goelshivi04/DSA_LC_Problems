class ParkingSystem {
public:
    int b,m,s,cb=0,cm=0,cs=0;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(cb>=b)
            return false;
            else
            {
                cb++;
                return true;
            }
        }
        if(carType==2)
        {
            if(cm>=m)
            return false;
            else
            {
                cm++;
                return true;
            }
        }
        if(carType==3)
        {
            if(cs>=s)
            return false;
            else
            {
                cs++;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
