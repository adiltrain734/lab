#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,rem,sum=0,temp;
    cout << "Enter n" << endl;
    cin >> n;
    temp = n;
    while(n!=0) {
        rem = n%10;
        sum += pow(rem, 3);
        n = n/10;
    }
    if(sum==temp) {
        cout << "Yes" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    cout << "ASSCII" << endl;
    char c;
    cout << "Enter character\n";
    cin >> c;
    cout << (int)c;
    return 0;
}