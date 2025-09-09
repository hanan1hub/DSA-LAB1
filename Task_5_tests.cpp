void test_n(){
    pascal_triangle(0);
    pascal_triangle(1);
    pascal_triangle(5);
}
void test_verify_rows(){
    bool pass = true;
    int rows[] = {1, 4, 6, 4, 1};
    int n = sizeof(rows)/sizeof(int); 
    int row_index = n - 1; 

    for(int j = 0; j < n; j++){
        int value = 1;
        for(int k = 0; k < j; k++){
            value = value * (row_index - k) / (k + 1);
        }
        if(value != rows[j]){
            pass = false;
            break;
        }
    }

    if(pass){
        cout << "Row " << row_index + 1 << " verification: PASS" << endl;
    } else {
        cout << "Row " << row_index + 1 << " verification: FAIL" << endl;
    }
}