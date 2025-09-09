#include <iostream>
#include <vector>
using namespace std;

vector<int> find_indices(vector<int>& num, int key) {
    vector<int> indices;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

void test_multiple_occurrence() {
    cout << "Test Case 1: Multiple Occurrences" << endl;
    vector<int> num = {2, 4, 3, 5, 6, 5, 6, 7};
    vector<int> result = find_indices(num, 6);
    vector<int> expected = {4, 6};

    bool pass = (result.size() == expected.size());
    for(int i =0;i<result.size() && pass;i++){
        if (result[i] != expected[i]) {
            pass = false;
        }
    }

    if(pass) {
    cout << "Test Case PASS" << endl;
    }else{
     cout << "Test Case FAIL" << endl;
    }
}

void test_key_absent() {
    cout << "Test Case 2: Key Absent" << endl;
    vector<int> num = {2, 4, 3, 5, 6, 5, 6, 7};  
    vector<int> result = find_indices(num, 1);
    vector<int> expected = {};

    bool pass = (result.size() == expected.size());
    for(int i =0;i<result.size() && pass;i++){
        if (result[i] != expected[i]) {
            pass = false;
        }
    }

    if(pass) {
    cout << "Test Case PASS" << endl;
    }else{
     cout << "Test Case FAIL" << endl;
    }
}

void test_empty_array() {
    cout << "Test Case 3: Empty Array" << endl;
    vector<int> num = {};
    vector<int> result = find_indices(num, 1);
    vector<int> expected = {};

    bool pass = (result.size() == expected.size());
    for(int i =0;i<result.size() && pass;i++){
        if (result[i] != expected[i]) {
            pass = false;
        }
    }
    if(pass) {
    cout << "Test Case PASS" << endl;
    }else{
     cout << "Test Case FAIL" << endl;
    }
}
int main() {
    test_multiple_occurrence();
    test_key_absent();
    test_empty_array();
    return 0;
}
