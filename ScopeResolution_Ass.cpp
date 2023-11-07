#include <iostream>

using namespace std;

// Base class (parent class)
class Shape {
public:
    void draw() {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class (child class)
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
    
    void drawShape() {
        // Access the base class method using the scope resolution operator
        Shape::draw();
    }
};

int main() {
    Circle myCircle;
    myCircle.draw(); // Calls the draw method from the derived class
    myCircle.drawShape(); // Calls the draw method from the base class using the scope resolution operator

    return 0;
}
