#include <iostream>
#include "q17-data.hpp"
using namespace std;

DataProcessor::DataProcessor(int n) {
    SIZE = n;
    data = new int[SIZE];
}

DataProcessor::~DataProcessor(){
    delete []data;
}

void DataProcessor::input() {
    for (int i = 0; i < SIZE; i++) cin >> data[i];
}

void DataProcessor::sort() {
    for (int i = 0; i < SIZE; i++) {
        int min_pos = i;
        for (int j = i; j < SIZE; j++) {
            if(data[min_pos] > data[j]) min_pos = j;
        }
        int temp = data[i];
        data[i] = data[min_pos];
        data[min_pos] = temp;
    }
}

int DataProcessor::binarySearch(int x) {
    int l = 0, r = SIZE - 1;
    while (l < r) {
        int m = (l + r) / 2;
        if(data[m] == x) return m;
        else if (data[m] > x) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

int DataProcessor::frequency(int x) {
    int c = 0;
    for (int i = 0; i < SIZE; i++) {
        if(data[i] == x) c++;
    }
    return c;
}

void DataProcessor::display() {
    cout << "Size = " << SIZE << endl;
    for (int i = 0; i < SIZE; i++) cout << data[i] << " ";
    cout << endl;
}

