#include<iostream>
using namespace std;

class myclass {
    static int count;
    myclass() {
        count = 1;
    }
    public:
        int a = 3;
        friend myclass* create();
};

myclass * create() {
    if(myclass:: count == 0) {
        myclass *a;
        a = new myclass();
        return a;
    } else {
        cout << "can't Create\n";
        return nullptr;
    }
}

int myclass::count = 0;

int main() {
    myclass *ob1, *ob2;
    ob1 = create();
    ob2 = create();
    cout << ob2->a;
    free(ob1);
    free(ob2);
    return 0;
}