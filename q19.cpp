#include<iostream>
using namespace std;

class Complex {
    public:
    float r;
    float i;
    
        Complex() {
            cout << "Enter real and imaginary part\n";
            cin >> r >> i;
        }
        Complex &operator=(Complex &ob) {
            r = ob.r;
            i= ob.i;
            return *this;
        }
        Complex & operator++(int x) {
            Complex temp = *this;
            r += 1;
            return *this;
        }
        Complex & operator++() {
            r += 1;
            return *this;
        }
        Complex operator+=(Complex ob) {
            r += ob.r;
            i += ob.i;
            return *this;
        }
        friend Complex operator+ (Complex ob1, Complex ob2);
        friend Complex operator- (Complex ob1, Complex ob2);
        friend int operator==(Complex &ob1, Complex &ob2);
        friend ostream & operator << (ostream &out, Complex &ob2);
        friend istream & operator >> (istream &in, Complex &ob2);
};

Complex & operator+ (Complex &ob1, Complex &ob2) {
    ob1.r = ob1.r + ob2.r;
    ob1.i = ob1.i + ob2.i;
    return ob1;
}

Complex & operator- (Complex &ob1, Complex &ob2) {
    ob1.r -= ob2.r;
    ob1.i -= ob2.i;
    return ob1;
} 

int operator== (Complex &ob1, Complex &ob2) {
        if(ob1.r == ob2.r && ob1.i == ob2.i) {
            return 1;
        }
        else {
            return 0;
        }
}

ostream & operator<< (ostream &out, Complex &ob) {
    cout << ob.r << " +i ";
    cout << ob.i << endl;
    return out;
}

istream & operator>> (istream &in, Complex &ob) {
    cin >> ob.r >> ob.i;
    return in;
}

int main () {
    Complex ob1,ob2;
    cout << ob1 << endl;
    cout << ob2 << endl;
    if (ob1 == ob2) {
        cout <<"Yes" << endl;
    } else { cout <<"No" << endl; }
    ob1 += ob2;
    cout << ob1 << endl;
    cout << ob2 << endl;
    Complex ob3;
    ob3 = ob1;
    cout << ob3;
    cout << ob3++;

    

    return 0;
}