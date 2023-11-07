#include <iostream>

using namespace std;

class MyClass {
 public:
  static int static_variable;

  MyClass() {}

  void print_static_variable() {
    cout << "The value of the static variable is: " << static_variable << endl;
  }
};

int MyClass::static_variable = 10;

int main() {
  MyClass obj;
  obj.print_static_variable();

  // Accessing the static variable directly:
  cout << "The value of the static variable is: " << MyClass::static_variable << endl;

  return 0;
}
