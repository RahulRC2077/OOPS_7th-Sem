#include<iostream>
using namespace std;

class Test{
    private:
        int data;

    public:
        Test(int val){
            data=val;
        }

        friend void display(const Test& obj);
};

void display(const Test& obj){
    cout<<"Data = "<<obj.data<<endl;
}


int main(){
    Test T(69);
    display(T);
    return 0;
}