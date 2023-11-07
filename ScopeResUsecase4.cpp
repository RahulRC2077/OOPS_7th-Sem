#include <iostream>

using namespace std;


class ParentClass {
 public:

  void print_parent() {
    cout << "I am a ParentClass object." << endl;
  }
};

class ChildClass : public ParentClass {
 public:
  ChildClass() {}

  void print_parent() {
    ::ParentClass::print_parent();
  }

  void print_child() {
    cout << "I am a ChildClass object." << endl;
  }
};


int main() {
  ChildClass obj;
  obj.print_parent();
  obj.print_child();
  return 0;
}
