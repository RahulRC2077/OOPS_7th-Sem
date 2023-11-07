#include<iostream>
using namespace std;

class B;
class A{
    public:
    A(){
        numA =15;
    } 

    private:
    int numA;

    //friend function

    friend int add(A a,B b);
};

class B{
        public:
        B(){
            numB=20;
        } 
        private:
        int numB;

        //friend function
        friend int add(A a,B b);
    };

int add(A objA,B objB){
    return (objA.numA + objB.numB);
}

int main(){
    A a;
    B b;
    cout<< " Sum = "<<add(a,b);
    return 0;
}
