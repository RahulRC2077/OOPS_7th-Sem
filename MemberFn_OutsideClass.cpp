#include <iostream>

using namespace std;

class MyClass {
 public:
    
  void print_hello() {
    cout << "Hello, from inside class!" << endl;
  }
  void my_function_outside_class();

};

void MyClass::my_function_outside_class() {
  cout << "Hello from outside the class!" << endl;
}

int main() {
  MyClass obj;
  obj.print_hello();
  obj.my_function_outside_class();
  return 0;
}
