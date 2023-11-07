#include<iostream>
#include<climits>
#include<string>
using namespace std;

class myclass{
    public:
        int num;
        string str;
};


int main(){
    myclass obj1,obj2;
    obj1.num = 10;
    obj1.str = "Rahul";

    obj2.num = 100;
    obj2.str = "RC";


    // cout<<"Enter number :";
    // cin>>obj.num;
    // cout<<"Enter name : ";
    // cin>>obj.str;

    cout<<"\nData of 1st object is "<<endl;
    cout<<obj1.num<<endl;
    cout<<obj1.str;

    cout<<"\n\nData of 2nd object is "<<endl;
    cout<<obj2.num<<endl;
    cout<<obj2.str;
    return 0;
}