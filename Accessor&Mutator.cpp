//Employee Employee ID,name,salary,hour of work,ITR filed amount

#include <iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

class Employee{
    int ID;
    string Ename;
    float salary;
    int hourofwork;
    float itramt;

    public:
        void setEmpID(int id){
            ID =id;
        }

        void setEmpName(string name){
            Ename = name;
        }

        void setEmpSalary(float s){
            salary =s;
        }

        void sethours(int H){
            hourofwork=H;
        }

        int getEmpID(){
            return ID;
        }

        string getEmpName(){
            return Ename;
        }

        float getEmpsalary(){
            return salary;
        }

        int gethourofwork(){
            return hourofwork;
        }
};


int main(){
    Employee Emp;

    Emp.setEmpID(101);
    Emp.setEmpName("RC");
    Emp.setEmpSalary(100000);
    Emp.sethours(2);

    cout<<"\n\n Employee details are :"<<endl;
    cout<<endl;
    cout<<"Employee name :"<<Emp.getEmpName()<<endl;
    cout<<"Employee ID : "<<Emp.getEmpID()<<endl;
    cout<<"Employee Salary :"<<Emp.getEmpsalary()<<endl;
    cout<<"Employee hours of work : "<<Emp.gethourofwork()<<endl;

    return 0;
}