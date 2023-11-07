#include<iostream>
using namespace std;

class Math{
    public:
    inline int square(int num){
        return num*num;
    }

};

int main(){
    Math math;
    int result = math.square(6);
    cout<<"Square = "<<result<<endl;
    return 0;
}