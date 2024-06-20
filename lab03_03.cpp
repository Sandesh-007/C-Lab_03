#include <iostream>
using namespace std;

class CarPark {
private:
    int carId;
    int chargePerHour;
    float parkedTime;

public:
    // Function to set car ID
    void setCarId(int id) {
        carId = id;
    }

    // Function to get car ID
    int getCarId() {
        return carId;
    }

    // Function to set charge per hour
    void setChargePerHour(int charge) {
        chargePerHour = charge;
    }

    // Function to get charge per hour
    int getChargePerHour() {
        return chargePerHour;
    }

    // Function to set parked time
    void setParkedTime(float time) {
        parkedTime = time;
    }

    // Function to get parked time
    float getParkedTime() {
        return parkedTime;
    }

    // Function to show charges and parked hours
    void showCharges() {
        cout << "Car ID: " << carId << endl;
        cout << "Parked Time: " << parkedTime << " hours" << endl;
        cout << "Charge per Hour: $" << chargePerHour << endl;
        cout << "Total Charge: $" << chargePerHour * parkedTime << endl;
    }
};

int main() {
    CarPark carPark;
    int carId, chargePerHour;
    float parkedTime;
    char choice;

    do {
        // User inputs
        cout << "Enter Car ID: ";
        cin >> carId;
        cout << "Enter Charge per Hour: ";
        cin >> chargePerHour;
        cout << "Enter Parked Time (in hours): ";
        cin >> parkedTime;

        // Set car park data
        carPark.setCarId(carId);
        carPark.setChargePerHour(chargePerHour);
        carPark.setParkedTime(parkedTime);

        // Display car park data
        carPark.showCharges();

        // Ask user if they want to enter another record
        cout << "Do you want to enter another record? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
