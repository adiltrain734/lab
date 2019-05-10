#include<iostream>
using namespace std;

template<class S>
class Stack{
    S a[10];
    int top;
    public: 
        Stack() {
            top = -1;
        }
        void push(S x) {
            if(top == 10) {
                cout << "Stack Full\n";
                return;
            }
            a[++top] = x;
        }
        int pop() {
            if(top == -1) {
                return -999;
            }
            return a[top--];
        }
        void display() {
            if(top==-1) {
                cout << "Stack Empty\n";
                return;
            }
            for(int i=top;i>=0;i--) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
};


int main() {
    Stack<int> s;
    int i,ch,p;
    do {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
                int x;
                cout << "Enter the element to be entered\n";
                cin >> x;
                s.push(x);
            break;
        case 2:
           p = s.pop();
            if(p == -999) {
                cout<< "Stack is Empty\n";
            } else {
                cout << "Poped element is " << p << endl;
            }
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout<< "Done" << endl;
            break;
        default:
            cout << "Enter correct chioce\n";
        }
    }while(ch!=4);
    return 0;
}