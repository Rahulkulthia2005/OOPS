#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {  // Method overriding
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;

    a->speak();  // Calls Dog's speak() due to overriding and virtual
    return 0;
}
