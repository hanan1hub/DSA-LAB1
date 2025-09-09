#include <iostream>
using namespace std;

int Checker_function(int num[], int size, int key) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (num[i] == key) {
            k += 1;
        }
    }
    return k;
}

int main() {
    test_multiple_occurrence();
    test_key_absent();
    test_empty_array();
    return 0;
}
