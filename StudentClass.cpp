#include <iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

class Student{
    int rollno;
    char grade;
    string name;

    public:
        void readdetails(){
            cout<<"Enter name :";
            cin>>name;
            
            cout<<"Enter roll no :";
            cin>>rollno;

            cout<<"Enter grade :";
            cin>>grade;

        }   

        void printdetails(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll No : "<<rollno<<endl;
            cout<<"Grade : "<<grade<<endl;
        }

};


int main(){
    Student S[5];

    cout<<"Enter student details for 5 student"<<endl;

    for(int i=0;i<5;i++){
        cout<<"Enter Student :"<<i<<"Details"<<endl;
        S[i].readdetails();
    }

    cout<<"\n\nStudent details are :"<<endl;
    cout<<endl;
    for(int i=0;i<5;i++){
        S[i].printdetails();
        cout<<endl;
    }

    return 0;
}