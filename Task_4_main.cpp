#include <iostream>
#include <string>
using namespace std;

int first_sub_string_occurence(const string &text, const string &pattern) {
    if(pattern.empty()){ 
        return 0; 
    }

    int n = text.length();
    int m = pattern.length();
    for(int i = 0; i <= n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(text[i + j] != pattern[j]){ 
                break;
            }
        }
        if(j == m){
            return i;
        }     
    }

    return -1; 
}

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

int main() {
    test_beginning();
    test_end();
    test_not_present();
    test_empty();
    return 0;
}
