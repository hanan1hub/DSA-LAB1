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

void test_multiple_occurrence() {
    cout << "Test Case 1: Multiple Occurrences" << endl;
    int num[] = {2, 4, 3, 5, 6, 5, 6, 7};
    int size = sizeof(num)/sizeof(num[0]);
    int result = Checker_function(num, size, 6);

    if(result > 1) {
        cout << "Test Case PASS" << endl;
    } else {
        cout << "Test Case FAIL" << endl;
    }
}

void test_key_absent() {
    cout << "Test Case 2: Key Absent" << endl;
    int num[] = {2, 4, 3, 5, 6, 5, 6, 7};
    int size = sizeof(num)/sizeof(num[0]);
    int result = Checker_function(num, size, 1);

    if(result == 0) {
        cout << "Test Case PASS" << endl;
    } else {
        cout << "Test Case FAIL" << endl;
    }
}

void test_empty_array() {
    cout << "Test Case 3: Empty Array" << endl;
    int num[1]; 
    int size = 0;
    int result = Checker_function(num, size, 1);

    if(result == 0) {
        cout << "Test Case PASS" << endl;
    } else {
        cout << "Test Case FAIL" << endl;
    }
}

int main() {
    test_multiple_occurrence();
    test_key_absent();
    test_empty_array();
    return 0;
}
