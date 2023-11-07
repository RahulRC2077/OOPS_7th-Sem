#include<iostream>
using namespace std;

class Distance{
    private:
        int meter;

        
    public:
        Distance(){
            meter=0;
        }
    
    friend int add(Distance d);
};

int add(Distance d){
    d.meter +=5;
    return d.meter;
}


int main(){
    Distance d;
    cout<<"Distance updated :"<<add(d)<<endl;
    return 0;
}