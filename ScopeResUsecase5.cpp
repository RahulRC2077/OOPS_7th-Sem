#include <iostream>

using namespace std;

class OuterClass {
 public:

  class InnerClass {
   public:

    void print() {
      cout << "I am an InnerClass object." << endl;
    }
  };
};

int main() {
    
  OuterClass::InnerClass inner_obj; // Scope resolution operator is used here to access the InnerClass class from outside the OuterClass class.
  inner_obj.print();

  return 0;
}
