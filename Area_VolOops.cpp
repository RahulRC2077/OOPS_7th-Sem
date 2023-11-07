#include<iostream>
#include<climits>
#include<string>
using namespace std;

class myclass{
    public:
        float length,breadth,height,radius;
        float area(float l,float b){
            return (l*b);
        }

        float volume(float l,float b,float h){
            return (l*b*h);
        }

        float areacirc(float r){
            return ((3.142)*(r*r));
        }
};


int main(){
    myclass obj1,obj2;
    // obj1.length = 10;
    // obj1.breadth = 20;
    // obj1.height = 30;
    obj1.radius = 5.0;

    // cout<<"\nArea of 1st object is "<<endl;
    // cout<<obj1.area(obj1.length,obj1.breadth)<<endl;

    // cout<<"\n\nVolume of 1st object is "<<endl;
    // cout<<obj1.volume(obj1.length,obj1.breadth,obj1.height)<<endl;

    cout<<"Area of circle is "<<endl;
    cout<<obj1.areacirc(obj1.radius);
    
    return 0;
}