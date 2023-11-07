#include<iostream>
#include<climits>
#include<string>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main() {
    string name1;
    cout << "Enter string1: ";
    cin >> name1;
    reverse(name1);
    return 0;
}
