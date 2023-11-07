//Employee Employee ID,name,salary,hour of work,ITR filed amount

#include <iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

class Employee{
    int ID;
    string name;
    float salary;
    int hourofwork;
    float itramt;

    public:
        void readdetails(){
            cout<<"Enter name :";
            cin>>name;
            
            cout<<"Enter Employee ID :";
            cin>>ID;

            cout<<"Enter Salary :";
            cin>>salary;

            cout<<"Enter hour of work :";
            cin>>hourofwork;

            cout<<"Enter ITR filed amount :";
            cin>>itramt;

        }   

        void printdetails(){
            cout<<"Name : "<<name<<endl;
            cout<<"Employee ID : "<<ID<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"Hour of work :"<<hourofwork<<endl;
            cout<<"ITR Filed amount :"<<itramt<<endl;
        }

};


int main(){
    Employee E[5];

    cout<<"Enter Employee details for 2 Employee"<<endl;

    for(int i=0;i<2;i++){
        E[i].readdetails();
    }

    cout<<"\n\n Employee details are :"<<endl;
    cout<<endl;
    for(int i=0;i<2;i++){
        E[i].printdetails();
        cout<<endl;
    }

    return 0;
}