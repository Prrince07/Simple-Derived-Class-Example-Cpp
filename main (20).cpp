#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person {
public:
    void show() {
        cout << "I am a Student." << endl;
    }
};

int main() {
    Student s;
    s.display(); 
    s.show();    
    return 0;
}
