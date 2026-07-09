#include <iostream>
using namespace std;

int main(){

    string name;
    int age;
    char gender;
    float marks;
    float percentage;
    //Input
    cout << "Please Enter the name:" <<"\n";
    cin >> name;
    cout << "Please Enter the age:" << "\n";
    cin >> age;
    cout << "Please Enter the gender:" << "\n";
    cin >> gender;
    cout << "Please Enter the marks:" << "\n";
    cin >> marks;
    cout << "Please Enter the percentage:" << "\n";
    cin >> percentage;
    
    //Output
    cout << "Your name is " << name <<"\n" << "Your age is " <<age <<"\n" << "Gender is " << gender <<"\n" << "Your marks are " << marks << "\n" << "Percentage is " << percentage;
}