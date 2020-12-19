//
// Created by priyanshu on 19/12/20.
//

using namespace std;
#include "iostream"
int main() {
    string name;
    int age;
    cout << "Enter your name :";
    getline(cin, name);
    cout << "Enter age : ";
    cin >> age;

    cout << "Your name is " << name << " and age is " << age;
    return 0;

}