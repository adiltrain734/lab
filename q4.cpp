#include<iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    string type;
    float balance;
    public:
        void init() {
            cout << "Enter Name:"<<endl;
            cin >> name;
            cout << "Enter A/C no:" << endl;
            cin >> accNo;
            cout << "Enter A/c Type(SB/RD):"<< endl;
            cin >> type;
            cout << "Enter Opening balance\n";
            cin >> balance;
        }
        void deposit() {
            int n;
            cout << "Enter the money to be deposited\n";
            cin >> n;
            balance += n;
            cout << "Deposit Done\n";
            cout << "Current Balance = " << balance << endl; 
        }

        void withdraw() {
            int n;
            cout << "Enter the money to be deposited\n";
            cin >> n;
            if(balance - n >=0) {
                balance -= n;
                cout << "Withdraw Successful\n";
                cout << "Current Balance = " << balance << endl;
            }
        }
};

int main() {
    int n;
    cout << "Enter number of accounts to create: " << endl;
    cin >> n;
    cout << "Enter intial data of " << n << " customer(s):"<< endl;
    BankAccount ob[n];
    for(int i=0; i<n; i++) {
        ob[i].init();
    }

    cout <<  endl;
    return 0;
}