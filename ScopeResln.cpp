#include<iostream>
using namespace std;


/// Use case 1  Distinguish Local and Global
// int x;

// int main(){
//     int x=10;
//     cout<<"Globally , x = "<<::x<<endl;
//     cout<<"Locally , x= "<<x<<endl;
//     return 0;
// }



// Use case 2   Define function outside class
// class A{
//     public:
//         void func();
// };

// void A::func(){
//     cout<<"Func is called "<<endl;
// }

// int main(){
//     A obj;
//     obj.func();

//     return
// }


//Use case 3 - Static Accessing

// class Test{
//     static int x;
//     public:
//     static int y;
//     void func(int x){
//         cout<<"Value of static x = "<<Test::x;
//         cout<<"\n\nValue of local x = "<<x;
//     }
// };

// int Test::x=1;
// int Test::y=2;

// int main(){
//     Test obj;
//     int x=3;
//     obj.func(3);
//     cout<<"\n\nTest::y = "<<Test::y<<endl;
//     return 0;
// }


//Use case 4: Multiple Inheritance 

// class A{
//     protected:
//         int x;
//     public:
//         A(){
//             x=10;
//         }
// };

// class B{
//     protected:
//         int x;
//     public:
//         B(){
//             x=20;
//         }
// };

// class C: public A,public B{
//     public:
//         void fun(){
//             cout<<"A's x is "<<A::x<<endl;
//             cout<<"B's x is "<<B::x;
//         }
// };

// int main(){
//     C obj;
//     obj.fun();
//     return 0;
// }


//Use case 5 - Nesting

class A{
    public:
        class B{
            private:
                int num;
            public:
                void getdata(int x){
                    num=x;
                }

                void putdata(){
                    cout<<"Number is "<<num<<endl;
                }
        };
};

int main(){
    A::B obj;
    obj.getdata(9);
    obj.putdata();
}