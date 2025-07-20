#include<iostream>
using namespace std;

class Shape {
public:
    
    virtual void area() = 0;

    void describe() {
        cout << "This is a shape class." << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);

    s1->area();       
    s2->area();       
    s1->describe();   

    delete s1;
    delete s2;
    return 0;
}
