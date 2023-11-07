#include <iostream>

using namespace std;

int global_num = 10;

void my_function() {
  int num = 20;

  // Prints the value of the global variable num:
  cout << "The value of the global variable num is: " << ::global_num << endl;

  // Prints the value of the local variable num:
  cout << "The value of the local variable num is: " << num << endl;
}

int main() {
  my_function();
  return 0;
}
