#include<iostream>
using namespace std;

class Room{
    private:
        int length,width;

    public:
        void Dimension(int L,int B){
            length = L;
            width = B;
        }

        void calcArea()const{
            cout<<"Area = "<<length*width<<endl;
        }

};


int main(){
    Room R;
    int l,b;
    cout<<"Enter length and width : "<<endl;
    cin>>l>>b;
    R.Dimension(l,b);
    R.calcArea();
    return 0;
}