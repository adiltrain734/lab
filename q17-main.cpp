#include <iostream>
#include "q17-data.cpp"
using namespace std;

int main() {
    int n,key,num;
    cout << "Enter the size of the array\n";
    cin >> n;
    DataProcessor data(n);
    cout << "Enter the elements of the array\n";
    data.input();
    cout << "The elements of the array is\n";
    data.display();
    cout << "The sorted array is\n";
    data.sort();
    data.display();
    cout << "Enter the element to be searched\n";
    cin >> num;
    cout << num << " found at " << data.binarySearch(num) << endl;
    cout << "Enter the number whose frequency has to be found\n";
    cin >> key;
    cout << "Number of "<< key << " = "<< data.frequency(key);
    return 0;
}