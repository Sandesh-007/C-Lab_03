#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    float radius;

public:
    void readData() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void displayData() const {
        cout << "Circle radius: " << radius << endl;
    }

    float calculatePerimeter() const {
        return 2 * M_PI * radius;
    }

    float calculateArea() const {
        return M_PI * radius * radius;
    }
};

class Rectangle {
private:
    float length;
    float width;

public:
    void readData() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    void displayData() const {
        cout << "Rectangle length: " << length << ", width: " << width << endl;
    }

    float calculatePerimeter() const {
        return 2 * (length + width);
    }

    float calculateArea() const {
        return length * width;
    }
};

class Triangle {
private:
    float side1;
    float side2;
    float side3;

public:
    void readData() {
        cout << "Enter the first side of the triangle: ";
        cin >> side1;
        cout << "Enter the second side of the triangle: ";
        cin >> side2;
        cout << "Enter the third side of the triangle: ";
        cin >> side3;
    }

    void displayData() const {
        cout << "Triangle sides: " << side1 << ", " << side2 << ", " << side3 << endl;
    }

    float calculatePerimeter() const {
        return side1 + side2 + side3;
    }

    float calculateArea() const {
        // Using Heron's formula
        float s = calculatePerimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    // Circle
    cout << "\nCircle:\n";
    circle.readData();
    circle.displayData();
    cout << "Circle perimeter: " << circle.calculatePerimeter() << endl;
    cout << "Circle area: " << circle.calculateArea() << endl;

    // Rectangle
    cout << "\nRectangle:\n";
    rectangle.readData();
    rectangle.displayData();
    cout << "Rectangle perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << "Rectangle area: " << rectangle.calculateArea() << endl;

    // Triangle
    cout << "\nTriangle:\n";
    triangle.readData();
    triangle.displayData();
    cout << "Triangle perimeter: " << triangle.calculatePerimeter() << endl;
    cout << "Triangle area: " << triangle.calculateArea() << endl;

    return 0;
}
