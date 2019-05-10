#include<iostream>
using namespace std;

class STUDENT {
    protected:
        string name, usn;
        int age;
};

class UGSTUDENT: public STUDENT {
    static float sum, avg;
    static int count;
    int sem;
    float fees, stipend;
    public:
        UGSTUDENT() {
            cout << "Enter UG student name, usn, age, sem, fees and stipned\n";
            cin >> name >> usn >> age >> sem >> fees >> stipend;
            count++;
            sum += age;
            avg = sum/(float)count;
        }
        static void show() {
            cout << "Average age = " << avg << endl;
        }
};

class PGSTUDENT: public STUDENT {
    static float sum, avg;
    static int count;
    int sem;
    float fees, stipend;
    public:
        PGSTUDENT() {
            cout << "Enter PG student name, usn, age, sem, fees and stipned\n";
            cin >> name >> usn >> age >> sem >> fees >> stipend;
            count++;
            sum += age;
            avg = sum/(float)count;
        }
        static void show() {
            cout << "Average age = " << avg << endl;
        }
};

float UGSTUDENT:: sum = 0;
float UGSTUDENT:: avg = 0;
int UGSTUDENT :: count = 0;
float PGSTUDENT:: sum = 0;
float PGSTUDENT:: avg = 0;
int PGSTUDENT:: count = 0;

int main() {
    int n;
    cout << "Enter the number of UG students\n";
    cin >> n;
    UGSTUDENT ug[n];
    UGSTUDENT::show();
    cout << "Enter the number of PG students\n";
    cin >> n;
    PGSTUDENT pg[n];
    PGSTUDENT::show();
    return 0;
}