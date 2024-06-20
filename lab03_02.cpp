#include <iostream>
using namespace std;

class PrimeCheck {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    void run() {
        char response;
        do {
            int number;
            cout << "Enter a number to check if it is prime: ";
            cin >> number;

            if (isPrime(number)) {
                cout << number << " is a prime number." << endl;
            } else {
                cout << number << " is not a prime number." << endl;
            }

            cout << "Do you want to check another number? (y/n): ";
            cin >> response;
        } while (response == 'y' || response == 'Y');
    }
};

int main() {
    PrimeCheck primeChecker;
    primeChecker.run();
    return 0;
}
