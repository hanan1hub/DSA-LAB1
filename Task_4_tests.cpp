void test_beginning() {
    string text = "hello world";
    string pattern = "hello";
    int result = first_sub_string_occurence(text, pattern);
    if(result ==0){
        cout<<"test 1 (beginning) passed."<<endl;
    }else{
        cout<<"test 1 (beginning) failed."<<endl;
    }
}

void test_end() {
    string text = "hello world";
    string pattern = "world";
    int result = first_sub_string_occurence(text, pattern);
    if(result ==6){
        cout<<"test 2 (end) passed."<<endl;
    }else{
        cout<<"test 2 (end) failed."<<endl;
    }
}

void test_not_present() {
    string text = "hello world";
    string pattern = "bye";
    int result = first_sub_string_occurence(text, pattern);
    if(result ==-1){
        cout<<"test 3 (not present) passed."<<endl;
    }else{
        cout<<"test 3 (not present) failed."<<endl;
    }
}

void test_empty() {
    string text = "hello world";
    string pattern = "";
    int result = first_sub_string_occurence(text, pattern);
    if(result ==0){
        cout<<"test 4 (empty pattern) passed."<<endl;
    }else{
        cout<<"test 4 (empty pattern) failed."<<endl;
    }
}