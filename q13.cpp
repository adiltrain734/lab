#include<iostream>
using namespace std;

template <class S>
void sort(S a[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i-1; j>=0; j--) {
            if(a[j] > a[j+1]) {
                S temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << "The sorted array is\n";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

template <class S>
void bsearch(S a[], int low, int high, int n, S key) {
    while(low <= high) {
        int mid = (low+high)/2;
        if(a[mid] == key) {
            cout << "Key Found at index " << mid << endl;
            return;
        } else if(key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid+1;
        }
    }
    cout << "Key not present" << endl;
    return;
}

int main() {
    int n,key;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array\n";
    for(int i=0; i<n ;i++) 
        cin >> a[i];
    sort(a,n);
    cout << "Enter the key to be found\n";
    cin >> key;
    bsearch(a,0,n-1,n,key);
}