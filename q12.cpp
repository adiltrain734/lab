#include<iostream>
#include<cmath>
using namespace std;

class Shape{
    protected:
        float area, perimeter;
    public:
        Shape() {} ;
        virtual void initialize() = 0;
        virtual float computeArea() = 0;
        virtual float computePerimeter() = 0;
        virtual ~Shape() {};
};

class Traingle : public Shape {
    int s1, s2, s3;
    float s;
    public: void initialize() {
        cout << "Enter the three sides of triangle\n";
        cin >> s1 >> s2 >> s3; 
    }
    float computePerimeter() {
        perimeter = s1+s2+s3;
        return perimeter;
    }
    float computeArea() {
        area = sqrt(s*(s-1)*(s-2)*(s-3));
        return area;
    }
};

class Rectangle : public Shape {
    int l,b;
    public: void initialize() {
        cout << "Enter the length and breath\n";
        cin >> l >> b;
    }
    float computePerimeter() {
        perimeter = 2*(l+b);
        return perimeter;
    }
    float computeArea() {
        area = l*b;
        return area;
    }
};

int main() {
    Shape *s;
    Rectangle r;
    s = &r;
    s->initialize();
    cout << s->computeArea() << " " << s->computePerimeter() << endl;
    Traingle t;
    s = &t;
    s->initialize();
    cout << s->computeArea() << " " << s->computePerimeter() << endl;;
    return 0;
}