#include<iostream>
using namespace std;

class Circle{
    private:
        static float pi;

    public:
    static void calculateArea(float radius) {
        cout<<"The Area of the circle = "<< pi*radius*radius<<endl;
    }

};

float Circle::pi = 3.14159;

int main(){
    Circle c;
    c.calculateArea(5);
    return 0;
}