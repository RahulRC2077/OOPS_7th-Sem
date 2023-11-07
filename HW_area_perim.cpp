#include<iostream>
#include<climits>
#include<string>
using namespace std;

void areaperi(float a,float b){
    float are = a*b;
    float per = 2*(a+b);

    cout<<"Area = "<<are<<endl;
    cout<<"Perimeter = "<<per<<endl;
}


void swap(float a,float b){
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"a = "<<a<<" b ="<<b<<endl;
}

void sizeprint(){
    int a=2;
    float b=3.2;
    char c='R';
    bool f = 0;
    cout<<"Int = "<<sizeof(a)<<endl;
    cout<<"Float = "<<sizeof(b)<<endl;
    cout<<"Char = "<<sizeof(c)<<endl;
    cout<<"Bool = "<<sizeof(f)<<endl;
}


int main() {
    float l,w;
    cout<<"Enter length and breadth of rectangle";
    cin>>l>>w;
    //areaperi(l,w);
    //swap(l,w);
    sizeprint();
    return 0;
}
