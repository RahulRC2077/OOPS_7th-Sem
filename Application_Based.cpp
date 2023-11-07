#include <iostream>
#include <string>

using namespace std;


class Person {
public:
  string name;
  int age;

  void print() {
    cout << "Person name: " << name << endl;
    cout << "Person age: " << age << endl;
  }
};

class Student : public Person {
public:
  int grade;
  float gpa;

    Student(){
        return;
    }
  Student(string s_name, int s_age, int s_grade, float s_gpa) {
    Person::name = s_name;
    Person::age = s_age;
    grade = s_grade;
    gpa = s_gpa;
  }

  void print() {
    Person::print(); // Call the print() method from the base class
    cout << "Student grade: " << grade << endl;
    cout << "Student GPA: " << gpa << endl;

    cout<<endl;
  }
};


int main() {
  int n;
  cout << "Enter how many students data you want to enter: " << endl;
  cin >> n;

  // Declare an array of Student objects
  Student students[n];
  for(int i=0;i<n;i++){
    students[i]=Student();
  }
  // Get student information from the user and initialize the array
  for (int i = 0; i < n; i++) {
    string name;
    int age, grade;
    float gpa;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter student grade: ";
    cin >> grade;

    cout << "Enter student GPA: ";
    cin >> gpa;

    students[i] = Student(name, age, grade, gpa);
  }
    cout<<"\n\n\nStudent details are : "<<endl;
  // Print the student information
  for (int i = 0; i < n; i++) {
    cout<<"Student # "<<i+1<<endl;
    students[i].print();
  }

  return 0;
}
