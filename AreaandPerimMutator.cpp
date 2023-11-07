#include<iostream>
#include<climits>
#include<string>
using namespace std;

class Room{
    float length;
    float breadth;
    float area,perim;
    public:
        void setlength(float L){
            length = L;
        }

        void setbreadth(float B){
            breadth = B;
        }

        float areaperim(){
            area = length*breadth;
            perim = 2*(length+breadth);
        }

        float getarea(){
            return area;
        }

        float getperim(){
            return perim;
        }

};


int main() {
    float l,w;
    cout<<"Enter length and breadth of room"<<endl;
    cin>>l>>w;
    Room R;
    R.setlength(l);
    R.setbreadth(w);

    R.areaperim();

    cout<<"Area of room is = "<<R.getarea()<<endl;
    cout<<"Perimeter of room is = "<<R.getperim()<<endl;

    return 0;
}