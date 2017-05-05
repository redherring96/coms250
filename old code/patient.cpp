#include <iostream>
#include <string>
#include <array>


class Patient {
    private:
    
    const double NIGHTLY_RATE = 356.99;
    int totalDays;
    double TotalStay, TotalBill;
    
    public:

    double calcTotalStay();
    void appTotalBill(); // append a charge to the total bil
    void setTotalDays();
    int getTotalDays();
    
    class Surgery{
        private:
        string array surgerys[5];
        double array prices[5];
        
        public:
        
        double getSurge(int);
        
    }
    class Pharmacy {
        private:
        string array medicine[5];
        double array prices[5];
        
        public:
        
        double getMedi(int);
        
    }
}