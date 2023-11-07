#include<iostream>
using namespace std;

class Student{
    public:
    double marks;
    Student(double M){
        marks=M;
    }
};

void calcAvg(Student S1,Student S2){
    double avg = (S1.marks+S2.marks)/2;

    cout<<"Average = "<<avg<<endl;
}

void square(Student N1){
    double sq = N1.marks*N1.marks;

    cout<<"Square = "<<sq<<endl;
}
int main(){
    Student stud1(80);
    Student stud2(100);
    calcAvg(stud1,stud2);
    square(stud1);
    return 0;
}