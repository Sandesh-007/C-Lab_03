#include <iostream>
using namespace std;

class EmployeeReport {
private:
    int employeeId;
    float totalBonus;
    float totalOvertime;
    int year;

public:
    // Function to set report attributes
    void setpara(int id, float bonus, float overtime, int yr) {
        employeeId = id;
        totalBonus = bonus;
        totalOvertime = overtime;
        year = yr;
    }

    // Function to display the report
    void displayReport() const {
        cout << "An employee with ID " << employeeId << " has received Rs " << totalBonus << " as a bonus" << endl;
        cout << "and had worked " << totalOvertime << " hours as overtime in the year " << year << "." << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    // Create an array of EmployeeReport objects
    EmployeeReport *employees = new EmployeeReport[n];

    // Input data for each employee
    for (int i = 0; i < n; ++i) {
        int id;
        float bonus, overtime;
        int year;

        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> id;
        cout << "Total Bonus: Rs ";
        cin >> bonus;
        cout << "Total Overtime (hours): ";
        cin >> overtime;
        cout << "Year: ";
        cin >> year;

        employees[i].setpara(id, bonus, overtime, year);
    }

    // Display report for each employee
    cout << "\nEmployee Reports:\n";
    for (int i = 0; i < n; ++i) {
        employees[i].displayReport();
        cout << endl;
    }

    // Clean up dynamically allocated memory
    delete[] employees;

    return 0;
}
