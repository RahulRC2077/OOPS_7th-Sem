#include<iostream>
using namespace std;

class operation{
    public:
    inline int add(int num1,int num2){
        return num1+num2;
    }

    inline int sub(int num1,int num2){
        return num1-num2;
    }

    inline int mul(int num1,int num2){
        return num1*num2;
    }

    inline int divide(int num1,int num2){
        return num1/num2;
    }
};

int main(){
    operation math;
    int a,b,result;
    int choice;
    cout<<"1.Add\n2.Sub\n3.Multiply\n4.Divide\n\n";
    cin>>choice;
    switch(choice){
        case 1: cout<<"Enter two numbers :";
                cin>>a>>b;
                result = math.add(a,b);
                cout<<a<<" + "<<b<<" = "<<result<<endl;
                break;
        case 2: cout<<"Enter two numbers :";
                cin>>a>>b;
                result = math.sub(a,b);
                cout<<a<<" - "<<b<<" = "<<result<<endl;
                break;
        case 3: cout<<"Enter two numbers :";
                cin>>a>>b;
                result = math.mul(a,b);
                cout<<a<<" * "<<b<<" = "<<result<<endl;
                break;
        case 4: cout<<"Enter two numbers :";
                cin>>a>>b;
                result = math.divide(a,b);
                cout<<a<<" / "<<b<<" = "<<result<<endl;
                break;
        default: cout<<"Invalid choice"<<endl;
                break;
    }
    return 0;
}