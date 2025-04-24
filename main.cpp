#include <iostream>
using namespace std;

int main() {
    char name[100];//char para sa name [100] para malimit ang letters sa 100
    int age;

    // users name
    cout << "Enter your name: ";
cin.getline(name, 100);// cin,getline para masama space na nilagy ni user


    //age ng user
    cout << "Enter your age: ";
    cin >> age;

    //Dito makikita information na nilagay ng user
    cout <<"Hello, " << name << "! You are " << age << " years old." <<endl;


    return 0;// end ang program
