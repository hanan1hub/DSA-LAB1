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
    int arr[] = {};
    int result = find_max(arr, 0);
    if (result == -1)
        cout << "test 4 (empty array) passed." << endl;
    else
        cout << "test 4 (empty array) failed" << endl;
}
