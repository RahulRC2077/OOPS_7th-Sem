#include <iostream>

using namespace std;

class MyClass {
 public:
    
  void print_hello() {
    cout << "Hello, from inside class!" << endl;
  }
  
};


int main() {
  MyClass obj;
  obj.print_hello();
  return 0;
}
