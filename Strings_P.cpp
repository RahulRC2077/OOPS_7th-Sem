#include <iostream>
#include <string>  

using namespace std;

int main() {
    string name1, name2;
    cout << "Enter string1: ";
    cin >> name1;
    cout << "Enter string2: ";
    cin >> name2;

    // Length of the strings
    cout << "Length of string1: " << name1.length() << endl;
    cout << "Length of string2: " << name2.length() << endl;

    // Concatenation
    string concatenated = name1 + name2;
    cout << "Concatenated strings: " << concatenated << endl;

    // Copying
    string copied = name1;  // Copy the contents of name1
    cout << "Copied string: " << copied << endl;

    // Comparison
    if (name1 == name2) {
        cout << "String1 is equal to String2." << endl;
    } else {
        cout << "String1 is not equal to String2." << endl;
    }

    return 0;
}
