#include <iostream>
using namespace std;

class Celsius {
    public:
    float temperature;
    float ConvertToFahrenheit(float temp){
        return (temp*9.0/5.0)+32;
    }

};

class Fahrenheit {
    public:
    float temperature;
    float ConvertToCelsius(float temp){
    return (temp-32.0)*5.0/9.0;
    }
};

int main(){
    int choice;
    float inputTemp, convertedTemp;

    cout<<"What do you want to convert? Choose 1 or 2. \n 1. Celsius to Fahrenheit \n 2. Fahrenheit to Celsius";
    cin >> choice;

    if (choice==1){
        Celsius celsiusTemp;
        cout<<"Enter temperature in Celsius: ";
        cin >> inputTemp;
        convertedTemp = celsiusTemp.ConvertToFahrenheit(inputTemp);
        cout<<"Converted to Fahrenheit: "<<convertedTemp<<"°F"<<endl;
    }
    else if (choice == 2){
        Fahrenheit fahTemp;
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>inputTemp;
        convertedTemp=fahTemp.ConvertToCelsius(inputTemp);
        cout<<"Converted to Celsius: "<<convertedTemp<<"°C"<<endl;
    } else {
        cout << "Invalid Choice. Plzz run the program again. /n Thank you.";
    }
return 0;
}
