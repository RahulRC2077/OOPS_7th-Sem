#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() {
        cout << "Draw a shape." << endl;
        }
};


class Circle: public Shape {
    public:
        void draw() override {
        cout << "Draw a circle." << endl;
        }
};

class Square : public Shape {
    public:
        void draw() override {
        cout << "Draw a square." << endl;
        }
};

int main() {
    Circle circle;
    Square square;
    Shape& shapeRef1 = circle;
    shapeRef1.draw(); // calls the overridden function in circle class
    Shape&shapeRef2 = square;
    shapeRef2.draw(); // calls the overridden function in Square class
    return 0;
}
