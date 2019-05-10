#include<iostream>
#include<algorithm>
using namespace std;

class Student {
    string usn;
    string name;
    int marks[3];
    float avg;
    public: Student () {
        cout << "Enter USN, name, mark1, mark2 and mark3" << endl;
        cin >> usn >> name;
        for(int i=0;i<3;i++){
            cin >> marks[i];
        }
        average();
    }

    void average() {
        sort(marks,marks + 3);
        int m1, m2;
        avg = (marks[1]+marks[2])/2;
    }
    void display() {
        cout << usn << " " << name << " " << avg << endl;
    }   
};

int main() {

Student s[10];
cout << "Details of the 10 students are" << endl;
for(int i=0;i <10;i++) {
    s[i].display();
}
return 0;
}