#include<iostream>
using namespace std;

class Complex {
    public:
    float r,i;
    public:
        Complex() {
            cout << "Enter the real and imaginary values\n";
            cin >> r >> i;
        }
        friend Complex ADD(int x, Complex &s2);
        friend Complex ADD(Complex &s1, Complex &s2);
};

Complex ADD(int x, Complex &s2) {
    s2.r =  x + s2.r;
    return s2;
}

Complex ADD(Complex &s1, Complex &s2) {
    s1.r = s1.r + s2.r;
    s1.i = s1.i + s2.i;
    return s1;
}

int main() {
    int i, ch;
    do{
        cout << "1. to add int + complex\n 2. Add Complex with Complex\n 3. Exit\n";
        cin >> ch;
        switch(ch) {
                case 1: {
                    cout << "Enter the value of int\n";
                    cin >> i;
                    Complex ob;
                    ob = ADD(i,ob);
                    cout << ob.r << " " << ob.i << endl;
                    break;
                }
                case 2: {
                    Complex ob1,ob2;
                    ADD(ob1,ob2);
                    cout << ob1.r << " " << ob1.i << endl;
                    break;
                }
                case 3:
                    cout << "Exit" << endl;
                    break;
                default:
                    cout << "Enter correct option\n";
        }
    }while(ch!=3);
    return 0;
}
