#include <iostream>
#include <string.h>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shape = new Shape();
    shape->draw();
    
    Shape* rect = new Rectangle();
    rect->draw();
    
    return 0;
}
