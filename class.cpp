// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;


class Vehicle{
    public: string brand;
        Vehicle(string brand) {
            this->brand = brand;
        }
        Vehicle(int mileage){
            this->mileage = mileage;
        }
        Vehicle(string brand, int mileage) {
            this->brand = brand;
            this->mileage = mileage;
        }
        ~Vehicle() {
            cout << this->brand << " is dead" <<endl;
        }
        private:
            int mileage;
};

class Car: public Vehicle{
    public:
    Car(string brand) : Vehicle(brand){};
    Car(int mileage) : Vehicle(brand){};
};

int main() {
    // Write C++ code here
    Car* myCar = new Car("Dacia");
    Car* myCar2 = new Car(19200);
    cout << myCar->brand << endl;
    delete myCar;
    cout << "Hello world! \n";

    return 0;
}
