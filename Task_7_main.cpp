#include <iostream>
using namespace std;

int find_max(int arr[], int size) {
    if (size == 0){ 
        return -1; 
    }    
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}
void test_max_normal() {
    int arr[] = {1, 5, 3, 9, 2};
    int result = find_max(arr, 5);
    if (result == 9)
        cout << "test 1 (normal array) passed." << endl;
    else
        cout << "test 1 (normal array) failed" << endl;
}

void test_max_negative() {
    int arr[] = {-5, -2, -9, -1};
    int result = find_max(arr, 4);
    if (result == -1)
        cout << "test 2 (all negative) passed." << endl;
    else
        cout << "test 2 (all negative) failed" << endl;
}

void test_max_single_element() {
    int arr[] = {42};
    int result = find_max(arr, 1);
    if (result == 42)
        cout << "test 3 (single element) passed." << endl;
    else
        cout << "test 3 (single element) failed" << endl;
}

void test_max_empty() {
    int arr[1] ;
    int size =0;
    int result = find_max(arr, size);
    if (result == -1)
        cout << "test 4 (empty array) passed." << endl;
    else
        cout << "test 4 (empty array) failed" << endl;
}

int main() {
    test_max_normal();
    test_max_negative();
    test_max_single_element();
    test_max_empty();
    return 0;
}
