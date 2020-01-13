#include <iostream>

using namespace std;

int main() {
    cout<<"Hello World"<<endl;
    string yourName{};
    cout<<"What is your name"<<endl;
    getline(cin, yourName);
    cout<<"Hello, "<<yourName<<endl;
    return 0;
}