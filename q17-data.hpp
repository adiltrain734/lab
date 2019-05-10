#include <iostream>
using namespace std;

class DataProcessor {
    private:
        int *data;
        int SIZE;
    public:
        DataProcessor(int x);
        ~DataProcessor();
        void input();
        void sort();
        int binarySearch(int x);
        int frequency(int x);
        void display();
};

